#include <iostream>
#include <iomanip>
using namespace std;

int myPlus(int a, int b) {
	return a + b;
}
int myMinus(int a, int b) {
	return a - b;
}
int myMultiply(int a, int b) {
	return a * b;
}
int myDivision(int a, int b) {
	if (b != 0) {
		return a / b;
	}
	cout << "нельзя разделить на ноль" << endl;
	return 0;
}

float myPlus1(float a, float b) {
	return a + b;
}
float myMinus1(float a, float b) {
	return a - b;
}
float myMultiply1(float a, float b) {
	return a * b;
}
float myDivision1(float a, float b) {
	if (b != 0) {
		return a / b;
	}
	cout << "нельзя разделить на ноль" << endl;
	return 0;
}

int calc(int a, int b, char c) {
	switch (c) {
	case '+':
		return myPlus(a, b);
	case '-':
		return myMinus(a, b);
	case '*':
		return myMultiply(a, b);
	case '/':
		return myDivision(a, b);
	default:
		cout << "нельзя разделить на ноль" << endl;
		return 0;
	}
}

float calculator(float a, float b, char c) {
	switch (c) {
	case '+':
		return myPlus1(a, b);
	case '-':
		return myMinus1(a, b);
	case '*':
		return myMultiply1(a, b);
	case '/':
		return myDivision1(a, b);
	default:
		cout << "ошибка" << endl;
		return 0;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b;
	char c;
	cout << "введите два числа ";
	cin >> a >> b;
	cout << "выберите знак действия ";
	cin >> c;
	if (c == '+' or c == '-' or c == '*' or c == '/') {
		cout << calc(a, b, c);
	}
	else {
		cout << "ошибка" << endl;
	}
}