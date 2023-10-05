#include <iostream>
using namespace std;

int main()
{
    int a;
    setlocale(LC_ALL, "rus");
    cout << "Введите 4-х значное число\n";
    cin >> a;
    if (a / 1000 == 0 || a / 10000 > 0) {
        cout << "Ошибка";
    }
    else {
        cout << (a / 1000) * 100 + ((a / 100) % 10) * 1000 + ((a / 10) % 10) + (a % 10) * 10;
    }
}

