#include <iostream>
#include <ctime>
using namespace std;

int main() 
{ 
    srand(static_cast<unsigned int>(time(NULL)));//Делаем переобновление случайных значений

    double  x = rand() % 40 - 20,
            a = rand() % 40 - 20,
            b = rand() % 40 - 20,
            c = rand() % 40 - 20,
            d = rand() % 40 - 20;
    
    //Вывод их пользователю
    cout << "Точка Х: " << x << endl;
    cout << "Отрезок [a, b]: [" << a << ", " << b << "]" << endl;
    cout << "Отрезок [c, d]: [" << c << ", " << d << "]" << endl;

    string ret_text = "";
    if((x >= a && x <= b) || (x >= b && x <= a))ret_text+="Точка X принадлежит отрезку [a, b]\n";
    if((x >= c && x <= d) || (x >= d && x <= c))ret_text+="Точка X принадлежит отрезку [c, d]\n";
    
    if( ret_text.length() == 0)ret_text = "Точка Х не принадлежит этим отрезкам.";
    cout << ret_text;
    return 0; 
}