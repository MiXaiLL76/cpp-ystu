#include <iostream>
#include <ctime>
using namespace std;

int main() 
{ 
    srand(static_cast<unsigned int>(time(NULL)));//Делаем переобновление случайных значений

    // "вводим" переменные
    int y = rand() % 2017; 
    
    //Вывод их пользователю
    cout << "Введенный год: " << y << endl;

    int centure = ((y-1)/100)+1;

    cout << "Столтие: " << centure << endl;
    return 0; 
}