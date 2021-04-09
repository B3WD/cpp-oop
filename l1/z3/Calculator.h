//
// Created by tzvet on 9.4.2021 г..
//

#ifndef Z3_CALCULATOR_H
#define Z3_CALCULATOR_H

#include <iostream>
#include <cstring>
#include <cstdlib>

class Calculator {
private:
    char* _expression;
    bool isValid(const char* e) const;

public:
    Calculator(const char* expression = "0");
    Calculator(const Calculator& rhs);
    Calculator& operator=(const Calculator& rhs);
    ~Calculator();

    void setExp(const char* e);
    char * getExp() const { return _expression; };
    int calcExp() const;
    std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& lhs, const Calculator& rhs);

#endif //Z3_CALCULATOR_H
