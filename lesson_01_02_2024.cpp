#include <iostream>
using namespace std;
//template <typename T>
//                        //бинарный поиск в динамическом массиве;
//int binarySearchRecursive(int* arr, int target, int left, int right) {
// if (left > right) return -1;
//
// int mid = left + (right - left) / 2;
// cout << "Вызвали " << mid << endl;
// if (arr[mid] == target) {
//  return mid;
// }
// else if (arr[mid] > target) {
//  return binarySearchRecursive(arr, target, left,mid-1);
// }
// else {
//  return binarySearchRecursive(arr, target, mid + 1,right);
// }
//}
//
//int binarySearch(int* arr, int target) {
// int size = _msize(arr) / sizeof(arr[0]);
// return binarySearchRecursive(arr, target, 0, size - 1);
//}
//
//int main()
//{
// setlocale(LC_ALL, "rus");
// srand(time(NULL));
// int* array = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 9};
// int target = 8;
// cout << binarySearch(array, target);
//
//}


                        //нахождения факториала в функции типа void;

void fact(int num, int result = 1) {
    if (num == 1) {
        cout << result;
        return;
    }
    fact(num - 1, result * num);
    if (num <= 0) {
        cout << " ошибка " << endl;
        return;
    }
}


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int num = 5;
    cout << "факториал " << num << " = ";
    fact(num);

}