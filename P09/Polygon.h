#ifndef POLYGON_H
#define POLYGON_H

#include <vector>

#include "Point.h"

class Polygon {
   public:
    Polygon();
    Polygon(const std::vector<Point>& points);
    void add_vertex(int index, const Point& point);
    void remove_vertex(int index);
    bool get_vertex(int index, Point& point) const;
    int total_number_of_vertices() const;
    double perimeter() const;
    void show() const;

   private:
    std::vector<Point> vertices;
};

#endif  // POLYGON_H