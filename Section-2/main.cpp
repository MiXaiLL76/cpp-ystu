#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double rand(double b, double e);//Представление!?

int main() 
{ 
    srand(static_cast<unsigned int>(time(NULL)));//Делаем переобновление случайных значений

    // "вводим" переменные
    double a = rand(0,10); 
    double h = rand(0,10);
    
    //Вывод их пользователю
    cout << "a: " << a << endl;
    cout << "h: " << h << endl << endl;

    double S = a*(a+2*sqrt(pow(a/2,2)+pow(h,2)));
    double V = (h/3)*pow(a,2);
    cout << "S: " << S << endl;
    cout << "V: " << V << endl;
    return 0; 
}


//http://www.cyberforum.ru/cpp-beginners/thread383355.html
double rand(double b, double e)//Функция самописная, честно стыреная с cyberforum
{
   return b + (rand() % static_cast<unsigned int>((e - b) * 1000)) / 1000.f;   
}