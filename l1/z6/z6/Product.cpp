#include "Product.h"
#include <cstring>
#include <iostream>

Product::Product()
{
    std::cout << "Default constructor." << std::endl;

    name = nullptr;
    manifacturer = nullptr;
    price = 0;
    h = 0;
    w = 0;
    d = 0;
    expieryDate = Date(0, 0, 0);
}

Product::Product(char* name, char* manifacturer, float price, float height , float widht, float depth, Date expieryDate)
{
    this->name = name;
    this->manifacturer = manifacturer;

    this->price = price;
    h = height;
    w = widht;
    d = depth;
    this->expieryDate = expieryDate;
}

Product::~Product()
{
}

bool Product::isExpired(Date currentDate) const
{
    if (this->expieryDate > currentDate) {
        return false;
    }

    return true;
}

int Product::printData() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Manufacturer: " << manifacturer << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Box size: " << h << "x" << w << "x" << d << std::endl;
    std::cout << "Expiery date: " 
        << expieryDate.getDay() << "." 
        << expieryDate.getMonth() << "." 
        << expieryDate.getYear() << std::endl;

    return 0;
}

int Product::setPrice(float p)
{
    if (price > 0){ price = p; }
    return 0;
}

int Product::setH(float h)
{
    if (h > 0) { this->h = h; }
    return 0;
}

int Product::setW(float w)
{
    if (w > 0) { this->w = w; }
    return 0;
}

int Product::setD(float d)
{
    if (d > 0) { this->d = d; }
    return 0;
}

char* Product::getName() const {
    return name;
}

char* Product::getManifacturer() const {
    return manifacturer;
}

float Product::getPrice() const {
    return price;
}

float Product::getH() const {
    return h;
}

float Product::getW() const {
    return w;
}

float Product::getD() const {
    return d;
}
