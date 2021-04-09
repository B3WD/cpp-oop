//
// Created by tzvet on 9.4.2021 г..
//

#ifndef Z7_CARD_H
#define Z7_CARD_H


class Card {
private:
    const char* bookName;
    const char* author;
    unsigned count;

public:

    Card();
    Card(const char*, const char*, unsigned);
    ~Card();
    int print() const;
};


#endif //Z7_CARD_H
