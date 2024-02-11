#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");                      //bubble_sort
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE] = {};
    cout << "до сортировки" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 1 + rand() % 20;
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE-1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }

    cout << "после сортировки" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}