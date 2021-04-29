//
// Created by tzvet on 29.4.2021 г..
//

#ifndef MAIN_CPP_AUTOMOBILEARR_H
#define MAIN_CPP_AUTOMOBILEARR_H

#include "Automobile.h"

class AutomobileArr {
private:
    int _sz;
    Automobile *_AMobileArr;
    // void cpyMobileArr(Automobile *source, int sz);

public:
    AutomobileArr(int sz);
    AutomobileArr(Automobile *AMobileArr, int sz);
    AutomobileArr(const AutomobileArr &rhs);
    ~AutomobileArr();

    AutomobileArr& operator=(const AutomobileArr &rhs);
    AutomobileArr operator+(const Automobile &rhs) const;

    std::ostream& ins(std::ostream &out) const;
    Automobile operator[](unsigned i) const;
    Automobile& operator[](unsigned i);

};

std::ostream& operator<<(std::ostream &out, const AutomobileArr &rhs);
void cpyMobileArr(Automobile *dest, Automobile *source, int sz);

#endif //MAIN_CPP_AUTOMOBILEARR_H
