#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    const int SIZE = 10;
    int array[SIZE];
    int count[SIZE] = { 0 };
    int a = 0;
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < SIZE; i++) {               //сам массив (рандомный)
        cout << array[i] << " ";
    }
    for (int i = 0; i < SIZE; i++) {
        count[array[i] - 1]++;
    }
    for (int i = 0; i < SIZE; i++) {
        while (count[i] > 0) {
            array[a++] = i + 1;
            count[i]--;
        }
    }
    
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }; cout << " - сортировка";
 
}

    