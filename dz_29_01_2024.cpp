#include <iostream>
#include <iomanip>
using namespace std;
                                                                         //1
//void chetn(int a) {
//    if (a % 2 == 0) cout << a << " - четное";
//    else {
//        cout << a << " - нечетное";
//    }
//}
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    srand(time(NULL));
//    int a;
//    cout << "Проверка на четность" << endl << "Введите число - ";
//    cin >> a;
//    chetn(a);
//}
//                                                                           //2
//bool aliexpress(string a) {
//	int len = a.length();
//	for (int i = 0; i < len / 2; i++)
//	{
//		if (a[i] != a[len - i - 1])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//	string pal;
//	cout << "введите слово ";
//	cin >> pal;
//	if (aliexpress(pal))
//	{
//		cout << "палиндром";
//	}
//	else
//	{
//		cout << "не палиндром";
//	}
//}
																		   //3
int factorial(int num) {
	int a = 1;
	for (int i = 1; i <= num; i++) {
		a *= i;
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int num;
	cout << "введите число" << endl;
	cin >> num;
	cout << factorial(num);
}