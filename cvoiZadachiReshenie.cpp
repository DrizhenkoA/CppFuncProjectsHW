﻿#include <iostream>
#include <iomanip>

using namespace std;

/* задачи на ввод/вывод данных */

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*вывести имя пользователя с приветстием в виде Привет, "Имя", добро пожаловать!*/
//    string a;
//    cout << "Введите свое имя ";
//    cin >> a;
//    cout << "Привет! " << a << ", добро пожаловать!";
//    
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*запросить 2 переменные и вывести их произведение*/
//    int a,b;
//    cout << "Введите два числа ";
//    cin >> a >> b;
//    cout << a*b << " - Произведение ваших чисел";
//
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*вывести произведение двух чисел */
//    int a, b;
//    cout << "Введите два числа ";
//    cin >> a >> b;
//    cout << a * b << " - Произведение ваших чисел";
//
//}



/* задачи на арифметические операторы*/

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*вывести перевернутое целое трехзначное число*/
//    int a;
//    cout << "Введите целое трехзначное число ";
//    cin >> a;
//    cout << a % 10 << (a / 10)%10 << a / 100 << " - Ваше перевернутое число";
//
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*запросить 3 числа и вывести их произведение и сумму*/
//    int a,b,c,d,e;
//    cout << "Введите 3 числа ";
//    cin >> a >> b >> c;
//    d = a * b * c;
//    e = a + b + c;
//    cout << d << " - Произведение ваших чисел \n" << e << " - Сумма ваших чисел\n";
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*пользователь вводит радиус круга, вывести его площадь*/
//    float a,b;
//    cout << "Введите радиус круга ";
//    cin >> a;
//    b = 3.14 * (a * a);
//    cout << "Радиус круга равен - " << b;
//    
//}

/* задачи на условия*/

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*запросить 2 числа, если первое больше, вывести произведение чисел, если второе - сумму*/
//    int a,b;
//    cout << "Введите два числа ";
//    cin >> a >> b;
//    if (a > b) {
//        cout << a * b;
//    }
//    else if (a < b) {
//        cout << a + b;
//    }
//    else {
//        cout << "ошибка";
//    }
//    
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*проверка пользователя на знание таблицы умножения (ТОЛЬКО ОДНОЗНАЧНЫЕ  ЧИСЛА)*/
//    int a, b, c;
//    cout << "Проверка на знание таблицы умножения \n";
//    cout << "Введите первое однозначное число ";
//    cin >> a;
//    cout << "Введите второе однозначное число ";
//    cin >> b;
//    cout << "Чему равно произведение введных вами чисел? ";
//    cin >> c;
//    if (c == a * b) {
//        cout << "Верно";
//    }
//    else if (c != a * b) {
//        cout << "Неверно, правильный ответ - " << a * b;
//    }
//    else {
//        cout << "ошибка";
//    }
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*запросить у пользователя пароль а затем сравнить его, если правильный - доступ разрешен, если неправильный - доступ запрещен*/
//    int a,b;
//    cout << "Введите пароль (цифры) ";
//    cin >> a;
//    cout << "Подтвердите свой пароль ";
//    cin >> b;
//    if (a == b) {
//        cout << "Доступ разрешен";
//    }
//    else if (a != b) {
//        cout << "Доступ запрещен";
//    }
//    else {
//        cout << "ошибка";
//    }
//
//}

/* задачи на множественные условия*/


//int main()
//{
//    setlocale(LC_ALL, "rus");          /*запросить 3 числа и вывести наибольшее*/
//    int a,b,c;
//    cout << "Введите 3 числа ";
//    cin >> a >> b >> c;
//    if (a > b && a > c) {
//        cout << "наибольшее число - " << a;
//    }
//    else if (b > a && b > c) {
//        cout << "наибольшее число - " << b;
//    }
//    else if (c > a && c > b) {
//        cout << "наибольшее число - " << c;
//    }
//    else {
//        cout << "ошибка";
//    }
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*юзер вводит номер пальца руки, вывести название этого пальца*/
//    int a;
//    cout << "Введите порядковый номер пальца на руке (1-5) ";
//    cin >> a;
//    if (a == 1) {
//        cout << "Это большой палец";
//    }
//    else if (a == 2) {
//        cout << "Это указательный палец";
//    }
//    else if (a == 3) {
//        cout << "Это средний палец";
//    }
//    else if (a == 4) {
//        cout << "Это безымянный палец";
//    }
//    else if (a == 5) {
//        cout << "Это мизинец";
//    }
//    else if (a == 6) {
//        cout << "Поздравляю! Вы - шестипалый мутант";
//    }
//    else if (a <=0 || a > 6) {
//        cout << "нет таких пальцев";
//    }
//    else {
//        cout << "ошибка";
//    }
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*запросить возраст пользователя и вывести в какой он категории по возрастам*/
//    int a;
//    cout << "Введите свой возраст ";
//    cin >> a;
//    if (a > 0 && a <= 13) {
//        cout << "Вы - ребенок";
//    }
//    else if (a >= 14 && a <= 18) {
//        cout << "Вы - юноша";
//    }
//    else if (a >= 19 && a <= 34) {
//        cout << "Вы - зрелый ";
//    }
//    else if (a >= 35 && a <= 59) {
//        cout << "Вы - средний ";
//    }
//    else if (a >= 60 && a <= 74) {
//        cout << "Вы - пожилой ";
//    }
//    else if (a >= 75 && a <= 84) {
//        cout << "Вы - старик ";
//    }
//    else if (a >= 85) {
//        cout << "Вы - долгожитель ";
//    }
//    else {
//        cout << "ошибка";
//    }
//
//}

/* задачи на тернарный оператор*/

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*проверка какое из двух введенных чисел больше*/
//    int a,b;
//    cout << "Введите два числа - ";
//    cin >> a >> b;
//    cout << ((a > b) ? " a > b" : "a < b");
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*проверка входит ли число в диапазон */
//    int a, b, c;
//    cout << "Введите границы диапазона - ";
//    cin >> a >> b;
//    cout << "Введите число - ";
//    cin >> c;
//    cout << ((c >= a && c <= b) ? "входит в диапазон " : " не входит в диапазон");
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");          /*проверка делится ли первое число на второе без остатка */
//    int a, b;
//    cout << "Введите два числа - ";
//    cin >> a >> b;
//    if (b != 0) {
//        cout << ((a % b != 0) ? "Первое число НЕ делится на второе без остатка" : "Первое число делится на второе без остатка");
//    }
//    else {
//        cout << "Ошибка";
//    }
//}

/* задачи на switch case*/

//int main()
//{
//    setlocale(LC_ALL, "rus");                              /*узнать день недели */
//    int a;
//    cout << "Введите номер дня недели - ";
//    cin >> a;
//    switch (a) {
//    case 1:
//        cout << "Понедельник";
//        break;
//    case 2:
//        cout << "Вторник";
//        break;
//    case 3:
//        cout << "Среда";
//        break;
//    case 4:
//        cout << "Четверг";
//        break;
//    case 5:
//        cout << "Пятница";
//        break;
//    case 6:
//        cout << "Суббота";
//        break;
//    case 7:
//        cout << "Воскресенье";
//        break;
//    default:
//        cout << "Нет такого дня недели";
//    }
//    
//}

//int main()
//{
//    setlocale(LC_ALL, "rus");                         /*пользователь вводит 2 числа а затем выбирает действие между числами */
//    int a, b, c;
//    cout << "Введите два числа - ";
//    cin >> a >> b;
//    cout << "Выберите действие между числами \n 1 - сложение, 2 - вычитание, 3 - произведение, 4 - деление \n";
//    cin >> c;
//    switch (c) {
//    case 1:
//        cout << a + b << " - сумма чисел";
//        break;
//    case 2:
//        cout << a - b << " - разность чисел";
//        break;
//    case 3:
//        cout << a * b << " - произведение чисел";
//        break;
//    case 4:
//        cout << a / b << " - деление чисел";
//        break;
//    default:
//        cout << "нет такого варианта";
//    }
//}

int main()
{
    setlocale(LC_ALL, "rus");                         /*пользователь выбирает курс какой валюты к рублю надо вывести */
    int a;
    cout << "Выберите валюту \n 1 - доллар, 2 - евро, 3 - юань \n";
    cin >> a;
    switch (a) {
    case 1:
        cout << " 100 рублей за 1 доллар";
        break;
    case 2:
        cout << " 102 рубля за 1 евро";
        break;
    case 3:
        cout << " 13,3 рубля за 1 юань";
        break;
    default:
        cout << "нет такого варианта";
    }
}