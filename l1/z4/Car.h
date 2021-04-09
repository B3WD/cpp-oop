//
// Created by tzvet on 7.4.2021 г..
//

#ifndef Z4_CAR_H
#define Z4_CAR_H


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

    void print() const;
};


#endif //Z4_CAR_H
