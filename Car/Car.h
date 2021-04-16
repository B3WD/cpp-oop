//
// Created by tzvet on 7.4.2021 г..
//

#ifndef Z4_CAR_H
#define Z4_CAR_H

#include <cstring>
#include <iostream>

class Car {
private:
    char * _brand;
    int _doors, _hp, _year;
    double _price;

public:
    Car(const char* brand = "Null", int doors = 0, int hp = 0, int year = 0, double price = 0);
    ~Car();
    Car(const Car&);
    Car& operator=(const Car &);

    void setBrand(const char * brand = "Null");
    inline char* getbrand() const { return _brand; };

    Car operator+(int rhs) const;
    Car& operator+=(int rhs);
    Car operator++(int);
    Car& operator++();
    Car& operator*=(int rhs);
    Car operator%(int rhs) const;
    bool operator>(const Car& rhs) const;
    bool operator>=(const Car& rhs) const;
    bool operator==(const Car& rhs) const;
    bool operator<(const Car& rhs) const;
    bool operator<=(const Car& rhs) const;

    operator double ();

    std::ostream& ins(std::ostream& out) const;
    void print() const;
};

std::ostream& operator<<(std::ostream& lhs, const Car& rhs);
std::ostream& operator<<(std::ostream& lhs, const Car* rhs);
Car operator+(int lhs, const Car& rhs);

#endif //Z4_CAR_H
