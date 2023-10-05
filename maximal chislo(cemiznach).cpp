#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a[7], b;
    cout << "Введите 7 целых чисел \n";
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6];
    for (int c{ 1 }; c < 7; c++) {
        b = a[0];
        if (a[c] > b) {
            b = a[c];
        }
    }
    cout << "Наибольшее число из введенных " << b;
}

