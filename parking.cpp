#include <iostream>
#include <string>
#include <ctime>
#include "parking.h"
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

const char LETTERS[]{ 'A','B', 'E', 'K', 'M', 'H','O', 'P', 'C', 'T', 'X', };
//const char NUMBERS[]{ '1','2', '3', '4', '5', '6', '7', '8', '9'};
const string COLORS[]{ "white","blue", "black", "yellow","red"}; //5
const string MODELS[]{ "Mercedes","Toyota", "BMW", "Lexus","Tesla" }; //5

class Car {
private:
    static int lastNumber;
    int number;
    string model;
    string color;

public:
    Car(){};
    Car(string model, string color) {
        this->number = lastNumber++;
        this->model = model;
        this->color = color;
    }

    int getNumber() {
        return number;
    }
    void carInfo() {
        cout << "Car number: " << number << "\nModel: " << model << "\nColor: " << color << "\n\n";
    }

//private:
//    void incrementLastNumber() {
//        
//    }
};

int Car::lastNumber = 1;


int main()
{
    srand(time(NULL));
    Car cars[100];
    for (int i = 0; i < 100; i++) {
        cars[i] = Car(MODELS[random(0, 4)], COLORS[random(0, 4)]);
    }

    for (int i = 0; i < 100; i++) {
        cars[i].carInfo();
    }



}
