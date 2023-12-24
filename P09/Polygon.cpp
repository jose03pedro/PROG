#include "Polygon.h"

#include <iostream>

Polygon::Polygon() {}

Polygon::Polygon(const std::vector<Point>& points) : vertices(points) {}

void Polygon::add_vertex(int index, const Point& point) {
    if (index >= 1 && index <= total_number_of_vertices() + 1) {
        vertices.insert(vertices.begin() + index - 1, point);
    }
}

void Polygon::remove_vertex(int index) {
    if (index >= 1 && index <= total_number_of_vertices()) {
        vertices.erase(vertices.begin() + index - 1);
    }
}

bool Polygon::get_vertex(int index, Point& point) const {
    if (index >= 1 && index <= total_number_of_vertices()) {
        point = vertices[index - 1];
        return true;
    } else {
        return false;
    }
}

int Polygon::total_number_of_vertices() const { return vertices.size(); }

double Polygon::perimeter() const {
    double perimeter = 0.0;
    if (total_number_of_vertices() > 1) {
        for (size_t i = 0; i < vertices.size(); ++i) {
            perimeter +=
                vertices[i].distanceTo(vertices[(i + 1) % vertices.size()]);
        }
    }
    return perimeter;
}

void Polygon::show() const {
    std::cout << "{";
    for (size_t i = 0; i < vertices.size(); ++i) {
        vertices[i].show();
    }
    std::cout << "}";
}