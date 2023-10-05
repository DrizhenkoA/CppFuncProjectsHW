#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    char a;
    cout << "Введите любой символ ";
    cin >> a;
    if (a >= 'a' && a <= 'z') {
        cout << "Вы ввели букву";
    }
    else if (a >= '0' && a <= '9') {
        cout << "Вы ввели цифру";
    }
    else if (a >= '!' && a <= '.') {
        cout << "Вы ввели знак препинания";
    }
    else {
        cout << "Неизвестный символ";
    }
}

