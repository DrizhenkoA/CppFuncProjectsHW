#include <iostream>
using namespace std;

//int main()
//{
//	srand(time(NULL));						//#1
//	int a, b, c, d;
//	cout << "vvedite 4 shisla";
//	cin >> a >> b >> c >> d;
//	if (a > b && a > c && a > d) cout << a << " - naibolshee ";
//	if (b > a && b > c && b > d) cout << b << " - naibolshee ";
//	if (c > a && c > b && c > d) cout << c << " - naibolshee ";
//	if (d > a && d > b && d > c) cout << d << " - naibolshee ";
//}

int main() 
{
    setlocale(LC_ALL, "rus");						//#2
    srand(time(NULL));
    int n, a, b;
    cout << "введите число n - ";
    cin >> n;
    cout << "введите начало - ";
    cin >> a;
    cout << "введите конец -  ";
    cin >> b;
    if (a > b) swap(a, b);
    cout << "целые числа в диапазоне от " << a << " до " << b << ": ";
    for (int i = 0; i < n; i++) {
        if (a + i <= b) cout << a + i << " ";

    }
}

//int main()
//{
//	srand(time(NULL));						//#3
//	float max;
//	cout << "vvedite max chislo ";
//	cin >> max;
//	if (max < 0) cout << "vvedite polozhitelnot chislo!";
//	for (float i = 0; i <= max;i+=0.5) {
//		cout << i << " ";
//	}
//}

//int main()
//{
//	srand(time(NULL));						//#4
//	float a,sum=0,count=0;
//	cout << "vvedite chisla, 0 = vivesti credn. arifmet. ";
//	do {
//		cin >> a;
//		sum += a;
//		count++;
//	} while (a != 0);
//	if (a == 0) {
//		cout << sum / (count-1) << " - credn. arifm";
//	}
//}

//int main()                                             //#5
//{
//    setlocale(LC_ALL, "rus");
//    char a;
//    cout << "Введите любой символ ";
//    cin >> a;
//    if (a >= 'a' && a <= 'z') {
//        cout << "Вы ввели английскую букву";
//    }
//    else if (a >= '0' && a <= '9') {
//        cout << "Вы ввели цифру";
//    }
//    else if (a >= '!' && a <= '.') {
//        cout << "Вы ввели знак препинания";
//    }
//    else {
//        cout << "Неизвестный символ (либо русская буква)";
//    }
//}


//int main()                                             //# 6, 7
//{
//    setlocale(LC_ALL, "rus");
//    const int SIZE = 10;
//    int array[SIZE];
//    int array2[SIZE];
//    int count = 0;
//    for (int i = 0, k = 7; i < SIZE; i++, k++) {
//        array[i] = k;
//    }
//    cout << "Элементы первого массива - " << endl;
//    for (int i = 0; i < SIZE; i++) {
//        cout << array[i] << " ";
//    }
//
//    for (int i = 0; i < SIZE; i++) {
//        if (array[i] % 2 == 0) {
//            array2[count] = array[i];
//            count++;
//        }
//    }
//    cout << endl;
//    cout << "Массив, содержащий только четные числа из первого массива - " << endl;
//    for (int i = 0; i < count; i++) {
//        cout << array[i] << " ";
//    }
//    
//}

//int main()                                                 //#8
//{
//	setlocale(LC_ALL, "rus");
//	char a = '0';
//	int n;
//	cout << "Введите число n - ";
//	cin >> n;
//	if (n % 2 == 0) n++;
//	for (int i = 0; i < n; i++) {
//		cout << a << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < n - 2; i++) {
//		cout << "0 ";
//		for (int j = 0; j < n - 2; j++) {
//			if (i == (n - 2) / 2 || j == (n - 2) / 2)
//				cout << "0 ";
//			else cout << "  ";
//		}
//		cout << "0" << endl;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << a << " ";
//	}
//}

//int main()                                             //#9
//{
//    setlocale(LC_ALL, "rus");
//    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int size = sizeof(array) / sizeof(array[0]);
//
//    cout << "Четные значения массива - " << endl;
//    for (int i = 0; i < size; i++) {
//        if (array[i] % 2 == 0) {
//            cout << array[i] << " ";
//        }
//    }
//
//}

//int main()                                             //#10
//{
//    setlocale(LC_ALL, "rus");
//    
//}
