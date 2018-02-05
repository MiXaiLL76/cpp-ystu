#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double rand(double b, double e);//Представление!?
double ctg(double x);

int main() 
{ 
    srand(static_cast<unsigned int>(time(NULL)));//Делаем переобновление случайных значений

    // "вводим" переменные      
    double  x = rand(-10,10),
            xk = rand(x,20),
            h  = rand(0,1);
    
    //Вывод их пользователю
    cout << "x0: " << x << endl;
    cout << "xk: " << xk << endl;
    cout << "h:  " << h << endl << endl;
    
    double f = 0;

    while(x <= xk){
        if(x < 0){
            f = atan(x) + sqrt(x+3);
        }else if(x == 0){
            const int a = rand()%10,
                      b = rand()%10;
            cout << "a: " << a << endl;
            cout << "b: " << b << endl << endl;

            f = (a-b)+cos(M_PI*x);
        }else{
            f = pow(x,3) * ctg((M_PI*x)/2);
        }

        cout << "x: " << x << " | f: " << f << endl;
        x+=h;
    }
    return 0; 
}
double ctg(double x){
    return cos(x)/sin(x);
}
//http://www.cyberforum.ru/cpp-beginners/thread383355.html
double rand(double b, double e)//Функция самописная, честно стыреная с cyberforum
{
   return b + (rand() % static_cast<unsigned int>((e - b) * 1000)) / 1000.f;   
}