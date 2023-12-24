#include "Point.h"

#include <cmath>
#include <iostream>

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const { return x; }

int Point::getY() const { return y; }

void Point::setX(int x) { this->x = x; }

void Point::setY(int y) { this->y = y; }

double Point::distanceTo(const Point& other) const {
    int dx = x - other.x;
    int dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

void Point::show() const { std::cout << "(" << x << "," << y << ")"; }