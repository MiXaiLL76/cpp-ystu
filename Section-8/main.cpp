#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double rand(double b, double e);//Представление!?
int main() 
{ 
    srand(static_cast<unsigned int>(time(NULL)));//Делаем переобновление случайных значений

    // "вводим" переменные      
    const int n = 10;
    double array[n];

    double max  = 0;
    int    imax = 0;
    double   sr = 0;
    
    cout << "input array: " << endl;
    for(int i=0;i<n;i++){
        array[i] = rand(0,10);
        cout << "array[" << i << "]: "<< array[i] << endl;
        if(max < array[i]){
            max = array[i];
            imax = i;
        }
        sr += array[i];
    }
    sr /= n;
    array[imax] = sr;

    cout << endl << "output array: " << endl;
    for(int i=0;i<n;i++){
        if(imax == i)cout << "was max - ";
        cout << "array[" << i << "]: "<< array[i] << endl;        
    }
    
    return 0; 
}

//http://www.cyberforum.ru/cpp-beginners/thread383355.html
double rand(double b, double e)//Функция самописная, честно стыреная с cyberforum
{
   return b + (rand() % static_cast<unsigned int>((e - b) * 1000)) / 1000.f;   
}