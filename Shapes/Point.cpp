#include "Point.h"
#include <cmath>

Point::Point(double x, double y)
	:_x(x), _y(y)
{
}

Point::~Point()
{
}

double Point::distanceTo(const Point& p) const
{
	double dist = sqrt(pow(_x - p._x, 2) + pow(_y - p._y, 2));
	return dist;
}
