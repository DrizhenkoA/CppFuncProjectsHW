#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите число ";
	cin >> a;
	bool flag = true;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			flag = false;
			break;
		}
	}
	cout << endl << ((flag) ? "Да, число простое " : "Нет, не простое ");
}