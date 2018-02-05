#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double rand(double b, double e);//Представление!?

int main() 
{ 
    srand(static_cast<unsigned int>(time(NULL)));//Делаем переобновление случайных значений

    // "вводим" переменные
    double  a = rand(0,20)-10,
            b = rand(0,20)-10,
            c = rand(0,20)-10;
    
    //Вывод их пользователю
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl << endl;
    cout << "ax^2+bx+c=0; -> (" << a << ")x^2 + (" << b << ")x + ("<< c << ")" << endl << endl;
    
    double d=b*b -4*a*c;
    double xm = 0,x1 = 0,x2 = 0;

    if(d > 0){
        x1 = (-b-sqrt(d))/(2*a);
        x2 = (-b+sqrt(d))/(2*a);
    }
    else if(d == 0){
        x1 = x2 = (-b)/(2*a);
    }else{
        cout << "Корней уравнения ax^2+bx+c=0 нет."<< endl;
        return 0;
    }

    if(x1 > x2) xm = x2;
    else        xm = x1;

    cout << "x: " << xm << endl;
    double v = sin(d * pow((xm*xm + 4),1/5)) * exp(2*xm);
    cout << "v: " << v << endl;

    return 0; 
}

//http://www.cyberforum.ru/cpp-beginners/thread383355.html
double rand(double b, double e)//Функция самописная, честно стыреная с cyberforum
{
   return b + (rand() % static_cast<unsigned int>((e - b) * 1000)) / 1000.f;   
}