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
    int res = 000;

    if(isValid(_expression)){
        int numA, numB, countDel;
        char op;

        std::string c = _expression;

        numA = atoi(c.c_str());
        countDel = std::to_string(numA).length();

        while(c[countDel] != '\0'){

            op = c[countDel];
            countDel++;
            c.replace(0, countDel, "");
            numB = atoi(c.c_str());

            countDel = std::to_string(numB).length();
            c.replace(0, countDel, "");

            switch (op) {
                case '-':
                    res = numA - numB;
                    break;
                case '+':
                    res = numA + numB;
                    break;
                case '*':
                    res = numA * numB;
                    break;
                case '/':
                    res = numA / numB;
                    break;
            }

            numA = res;
            countDel = 0;
        }
    }

    return res;
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
