#pragma once
#include "Date.h"

class Product {
private:
	char* name;
	char* manifacturer;
	float price;
	float h;
	float w;
	float d;
	Date expieryDate;

public:

	Product();
	Product(char* name, char* manifacturer, float price, float h, float w, float d, Date expieryDate);
	~Product();

	bool isExpired(Date currentDate) const;
	int printData() const;
	
	int setPrice(float);
	int setH(float);
	int setW(float);
	int setD(float);

	char* getName() const;
	char* getManifacturer() const;
	float getPrice() const;
	float getH() const;
	float getW() const;
	float getD() const;

};