//
// Created by tzvet on 9.4.2021 г..
//

#include "Calculator.h"

Calculator::Calculator(const char* expression):_expression(new char[strlen(expression)+1]){
    strcpy(_expression, expression);
}

Calculator::~Calculator(){
    delete[] _expression;
}

bool Calculator::isValid(const char* e) const{
    unsigned len = strlen(_expression);
    for(int i = 0; i<len; i++){
        if((e[i] < '0' || e[i] > '9')
        && (e[i] != '+' && e[i] != '-' && e[i] != '*' && e[i] != '/')){
            return false;
        }
    }
    return true;
}

std::ostream& Calculator::ins(std::ostream& out) const {
    out << calcExp();
    return out;
}

int Calculator::calcExp() const {
//    int res = 0;
//
//    if(isValid(_expression)){
//        int a, b, len_a, len_b, last_pos = 0;
//        char op;
//        while(a != 0){
//            a = atoi(_expression+last_pos);
//            len_a = std::to_string(a).length();
//
//            last_pos += len_a;
//            op = _expression[last_pos];
//
//            a = atoi(_expression+last_pos);
//            len_a = std::to_string(a).length();
//
//        }
//
//    }
//
//    return res;
    return 0;
}

Calculator &Calculator::operator=(const Calculator &rhs) {
    if(this != &rhs){
        delete[] _expression;
        _expression = new char[strlen(rhs._expression)+1];
        strcpy(_expression, rhs._expression);
    }

    return *this;
}

Calculator::Calculator(const Calculator & rhs) {
    _expression = rhs._expression;
}

void Calculator::setExp(const char* e){
    delete[] _expression;
    _expression = new char[strlen(e) + 1];
    strcpy(_expression, e);
}

std::ostream& operator<<(std::ostream& lhs, const Calculator& rhs){
    return rhs.ins(lhs);
}
