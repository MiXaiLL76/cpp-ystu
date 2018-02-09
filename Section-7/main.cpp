#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double rand(double b, double e);//Представление!?
int main() 
{ 
    srand(static_cast<unsigned int>(time(NULL)));//Делаем переобновление случайных значений

    // "вводим" переменные      

    
    return 0; 
}

//http://www.cyberforum.ru/cpp-beginners/thread383355.html
double rand(double b, double e)//Функция самописная, честно стыреная с cyberforum
{
   return b + (rand() % static_cast<unsigned int>((e - b) * 1000)) / 1000.f;   
}