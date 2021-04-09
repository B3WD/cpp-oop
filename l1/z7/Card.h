//
// Created by tzvet on 9.4.2021 г..
//

#ifndef Z7_CARD_H
#define Z7_CARD_H

#include <iostream>
#include <cstring>

class Card {
private:
    char* _bookName;
    char* _author;
    unsigned _count;

public:

    Card(const char* bookName = "Null", const char* author = "Null", unsigned count = 0);
    Card(const Card& rhs);
    ~Card();

    Card& operator=(const Card& rhs);

    std::ostream& ins(std::ostream& out) const;
    void print() const;
};

std::ostream& operator<<(std::ostream& lhs, Card& rhs);

#endif //Z7_CARD_H
