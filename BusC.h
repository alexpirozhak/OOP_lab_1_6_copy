//
// Created by Олександр Пірожак on 13.03.2024.
//

#pragma once
#include <string>

using namespace std;

class BusC{

private:
    int seats;
    class Car {
    private:
        string mark;
        int cylinder;
        int power;
    public:
        string getMark() const { return mark; }
        int getCylinder() const { return cylinder; }
        int getPower() const { return power; }
        void setMark(string mark) { this->mark = mark; }
        void setCylinder(int cylinder) { this->cylinder = cylinder; }
        void setPower(int power) { this->power = power; }
        void Init(string mark, int cylinder, int power);
        void Display() const;
        void Read();
    };
    Car car;

public:
    int getSeats() const { return seats; }
    BusC::Car getCar() const { return car; }

    void setSeats(int seats) { this->seats = seats; }
    void setCar(BusC::Car car) { this->car = car; }

    void Init(int seats, BusC::Car car);
    void Display() const;
    void Read();

};