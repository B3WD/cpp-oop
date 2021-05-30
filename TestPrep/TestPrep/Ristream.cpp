#include "Ristream.h"

Ristream::Ristream(int l, int r) : _l(l), _r(r) { srand(rand()); }

Ristream& operator>>(Ristream& rin, int& val)
{
	val = rand() % (rin.getR() - rin.getL() + 1) + rin.getL();

	return rin;
}

Ristream& operator>>(Ristream& rin, double& val)
{
	int l = rin.getL() * 100, r = rin.getR() * 100;
	val = double(rand() % (r - l + 1) + l) / 100;

	return rin;
}

Ristream& operator>>(Ristream& rin, unsigned& val)
{
	val = rand() % (rin.getR() - rin.getL() + 1) + rin.getL();

	return rin;
}
