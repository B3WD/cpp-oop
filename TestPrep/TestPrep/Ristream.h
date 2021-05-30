#pragma once

#include <iostream>

class Ristream {
private:
	int _l, _r;

public:
	Ristream(int l, int r);

	int getL() const { return _l; };
	int getR() const { return _r; };
};

Ristream& operator>>(Ristream& rin, int& val);
Ristream& operator>>(Ristream& rin, double& val);
Ristream& operator>>(Ristream& rin, unsigned& val);