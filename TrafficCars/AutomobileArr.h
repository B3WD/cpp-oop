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
    void cpyMobileArr(Automobile *dest, Automobile *source, int sz);

public:
    AutomobileArr(Automobile *AMobileArr = nullptr, int sz = 0);
    AutomobileArr(const AutomobileArr &rhs);
    ~AutomobileArr();

    AutomobileArr& operator=(const AutomobileArr &rhs);

    std::ostream& ins(std::ostream &out) const;
    Automobile operator[](unsigned i) const;

};

std::ostream& operator<<(std::ostream &out, const AutomobileArr &rhs);

#endif //MAIN_CPP_AUTOMOBILEARR_H
