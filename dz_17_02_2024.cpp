#include <iostream>
using namespace std;
#define random(min,max) (min + rand() % (max - min + 1))
//template <typename T>

void fillArr(int** arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0, k = 1; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			arr[i][j] = k++;
		}
	}
}

void showArr(int** arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}



void indexDelete(int**& arr, int index) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	if (index<0 || index > size1 - 1) {
		cout << "Erorr";
		return;
	}

	int** buf = new int* [size1 - 1];

	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}

	for (int i = index + 1; i < size1; i++) {
		buf[i - 1] = arr[i];
	}

	delete[] arr[index];
	delete[] arr;
	arr = buf;

}


int main()
{
	setlocale(LC_ALL, "rus");
	int row = 3;
	int column = 3;
	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[column];
	}
	for (int i = 0, k = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			k++;
			arr[i][j] = k;
		}
	}
	cout << "массив до изменений ->" << endl;
	showArr(arr);
	cout << endl;
	cout << "Удаляем массив по индексу ->" << endl;
	indexDelete(arr, 1);
	cout << endl;
	showArr(arr);
}