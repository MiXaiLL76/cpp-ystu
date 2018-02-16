#include <iostream>
#include <stdlib.h> 
#include <cmath>
#include <ctime>
using namespace std;

double rand(double b, double e);//Представление!?
int factorial(int n);

int main() 
{ 
    srand(static_cast<unsigned int>(time(NULL)));//Делаем переобновление случайных значений

    // "вводим" переменные  


    const double  e = 0.00001f;
    double  x  = rand(-10,10),
            xk = rand(x,20),
            h  = rand(0,1);

    //Вывод их пользователю
    cout << "e: " << e << endl;
    cout << "x0: " << x << endl;
    cout << "xk: " << xk << endl;
    cout << "h:  " << h << endl << endl;

    do{
        long double  s = 0; // Бесконечная сумма S(x)  
        long double  a = 0; // Переменная 1 члена.

        int n = 1;
        s = x;         // Первый элемент!

        do{
            a = pow(x,2*n+1)/factorial(2*n+1);
            //cout << "S(x): " << s << " | x: " << x << " | a: " << a << endl;
            s += a; 
            n++;
        }while(abs(a) <= e);


        double y = sinh(x);
        cout << "x: " << x << " | S(x): " << s << " | y(x): " << y << endl;
    


        x += h;
    }while(x < xk);

    return 0; 
}

//http://www.cyberforum.ru/cpp-beginners/thread383355.html
double rand(double b, double e)//Функция самописная, честно стыреная с cyberforum
{
   return b + (rand() % static_cast<unsigned int>((e - b) * 1000)) / 1000.f;   
}

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}