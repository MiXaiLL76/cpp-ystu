#include <iostream>
#include <cmath>
using namespace std;

int main() 
{ 
    //Константные значения из задания
    const double a = 2.5f;
    const double b = 0.5f;    
    const double x_arr[] = {8,1};
    
    int x_len = sizeof(x_arr) / sizeof(x_arr[0]); // Длинна массива

    cout << "Кол-во переменных X: " << x_len << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl << endl;//Вывод с доп. пропуском строки

    double x = 0;//Перменная для перебора
    for(int i=0;i<x_len;i++){
        x = x_arr[i];//Задаём значение
        double Y = pow((x+a),5) * (atan(x) - sqrt(abs(pow(x-a,2))) + pow(log(pow(x,2)+1),2)); // формула из задания
        double F = sin(x) - exp(-a*x) + log(abs(x-a) + 2);

        cout << "x: " << x << endl;
        cout << "Y: " << Y << endl;
        cout << "F: " << F << endl << endl;
    }
   
    return 0; 
}