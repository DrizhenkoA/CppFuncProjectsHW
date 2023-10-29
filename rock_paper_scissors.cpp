#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int player=0,pc=0,a,b;
    int kamen = 1, nojnici=2,bumaga=3;
    while (player != 5 && pc != 5) {
        cout << player << ":" << pc << endl;
        cout << "Выберите камень ножницы или бумага (1-3)\n";
        cin >> a;
        b = 1 + rand() % 3;
        cout << "Компьютер выбрал - " << b << endl;
        if (a == 1 && b == 2) player++;
        else if (a == 1 && b == 3) pc++;
        else if (a == 1 && b == 1) cout << "Ничья\n";
        else if (a == 2 && b == 2) cout << "Ничья\n";
        else if (a == 2 && b == 3) player++;
        else if (a == 2 && b == 1) pc++;
        else if (a == 3 && b == 2) pc++;
        else if (a == 3 && b == 3) cout << "Ничья\n";
        else if (a == 3 && b == 1) player++;
    }
    if (player == 5) cout << "Player win";
    else if (pc== 5) cout << "PC win";
    

}