#pragma once

class Point
{
private:
	double _x, _y;

public:
	Point(double x = 0, double y = 0);
	~Point();

	double distanceTo(const Point &p) const;
	double getX() const { return _x; };
	double getY() const { return _y; };
};