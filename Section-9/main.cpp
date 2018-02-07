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
    double a[n], b[n], c[n];

    cout << "input array [a]: " << endl;
    for(int i=0;i<n;i++){
        a[i] = rand(0,10);
        cout << "a[" << i << "]: " << a[i] << endl;
    }
    cout  << endl << "input array [b]: " << endl;
    for(int i=0;i<n;i++){
        b[i] = rand(0,10);
        cout << "b[" << i << "]: " << b[i] << endl;
    }
    cout  << endl << "output array [c]: " << endl;

    int li = 0;
    for(int i=1;i<=n;i+=2){
        c[li] = a[i];
        cout << "c[" << li << "]: " << c[li] << endl;
        li++;
    }
    cout  << endl;
    for(int i=0;i<n;i+=2){
        c[li] = b[i];
        cout <<"c[" << li << "]: " << c[li] << endl;
        li++;
    }

    return 0; 
}

//http://www.cyberforum.ru/cpp-beginners/thread383355.html
double rand(double b, double e)//Функция самописная, честно стыреная с cyberforum
{
   return b + (rand() % static_cast<unsigned int>((e - b) * 1000)) / 1000.f;   
}