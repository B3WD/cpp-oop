//
// Created by tzvet on 30.3.2021 г..
//

#ifndef Z5_POINT_H
#define Z5_POINT_H


class Point {
private:
    float _x, _y, _z;
public:
    Point();
    Point(float x, float y, float z);
    ~Point();

    void scale(float a, float b, float c);
    void translate(float a, float b, float c);
    void printInfo() const;
};


#endif //Z5_POINT_H
