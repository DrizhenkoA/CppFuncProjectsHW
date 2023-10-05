#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    cout << "Введите шестизначное число \n";
    cin >> a;
    if (a / 100000 == 0 || a / 1000000 > 0) {
        cout << "Ошибка";
    }

    else if ((a / 100000) + (a / 10000) % 10 + (a / 1000) % 10 == (a / 100) % 10 + (a / 10) % 10 + (a) % 10) {
        cout << "Это счастливое число!";
    }
    
    else {
        cout << "Это несчастливое число!";
    }
}

