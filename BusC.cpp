//
// Created by Олександр Пірожак on 13.03.2024.
//

#include "BusC.h"
#include <iostream>

using namespace std;

void BusC::Init(int seats, BusC::Car car)
{
    setSeats(seats);
    setCar(car);
}
void BusC::Display() const
{
    cout << endl;
    cout << "car: " << endl;
    car.Display();
    cout << "seats  = " << seats << endl;
}
void BusC::Read()
{
    int seats;
    BusC::Car c;
    cout << endl;
    cout << "car: " << endl;
    c.Read();
    cout << "seats =  "; cin >> seats;
    Init(seats, c);
}

void BusC::Car::Init(std::string mark, int cylinder, int power)
{
    setMark(mark);
    setCylinder(cylinder);
    setPower(power);
}

void BusC::Car::Display() const
{
    cout << endl;
    cout << "mark = " << mark << endl;
    cout << "cylinders = " << cylinder << endl;
    cout << "power = " << power << endl;
}

void BusC::Car::Read()
{
    string mark;
    int cylinder, power;
    cout << endl;
    cout << "mark =  "; cin >> mark;
    cout << "cylinders =  "; cin >> cylinder;
    cout << "power =  "; cin >> power;
    Init(mark, cylinder, power);
}