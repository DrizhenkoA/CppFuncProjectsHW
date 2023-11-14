#include <iostream>
#include <iomanip>

using namespace std;

//int main()                               //задание 1
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	int array[10],min,max;
//	for (int i = 0; i < 10; i++) {
//		array[i] = 1 + rand() % (52);
//		cout << array[i] << " ";
//		max = array[0];
//		min = array[0];
//		for (int j = 1; j < 10; j++) {
//			if (max < array[j]) max = array[j];
//			if (min > array[j]) min = array[j];
//		}
//	}
//	cout << endl;
//	cout << "минимальное значение - " << min << endl << "максимальное значение - " << max << endl;
//}

//int main()                               //задание 2
//{
//    srand(time(NULL));
//    setlocale(LC_ALL, "rus");
//    int min, max, a;
//    cout << "Введите границы диапазона - ";
//    cin >> min >> max;
//    if (min > max) swap(min, max);
//    int array[5];
//    for (int i = 0; i < 5; i++) {
//        array[i] = rand() % (max - min + 1) + min;
//        cout << array[i] << " ";
//    }
//    cout << endl;
//    cout << "Введите число, а я выведу сумму всех чисел, которые меньше вашего - ";
//    cin >> a;
//    int sum = 0;
//    for (int j = 0; j < 5; j++) {
//        if (array[j] < a) {
//            sum += array[j];
//        }
//    }
//    cout << "Сумма чисел, меньше " << a << "- " << sum << endl;
//}

//int main()                               //задание 3
//{
//    setlocale(LC_ALL, "rus");
//    int ar[12], prib, min = 99999, max = 0, a, b;
//    for (int i = 0; i < 12; i++) {
//        cout << "Введите прибыль - ";
//        cin >> prib;
//        ar[i] = prib;
//    }
//    cout << "Введите диапазон месяцев (например, 3 и 6) - ";
//    cin >> a;
//    cin >> b;
//    for (int i = a-1; i < b; i++) {
//        if (ar[i] < min) {
//            min = ar[i];
//        }
//        if (ar[i] > max) {
//            max = ar[i];
//        }
//    }
//    cout << "Месяц с максимальной прибылью в выбранном диапазоне - " << max << endl;
//    cout << "Месяц с минимальной прибылью в выбранном диапазоне - " << min << endl;
//}

int main()                               //задание 4
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
