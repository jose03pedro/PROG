#include "Shape.h"

#include <cmath>

class Circle : public Shape {
   public:
    Circle(const point& center, double radius)
        : Shape(center), radius_(radius) {}
    double area() const override { return M_PI * radius_ * radius_; }
    double perimeter() const override { return 2 * M_PI * radius_; }
    bool contains(const point& p) const override {
        double distance = std::sqrt(std::pow(p.x - get_center().x, 2) +
                                    std::pow(p.y - get_center().y, 2));
        return distance <= radius_;
    }

   private:
    double radius_;
};

class Rectangle : public Shape {
   public:
    Rectangle(const point& center, double width, double height)
        : Shape(center), width_(width), height_(height) {}
    double area() const override { return width_ * height_; }
    double perimeter() const override { return 2 * (width_ + height_); }
    bool contains(const point& p) const override {
        double halfWidth = width_ / 2;
        double halfHeight = height_ / 2;
        double left = get_center().x - halfWidth;
        double right = get_center().x + halfWidth;
        double top = get_center().y + halfHeight;
        double bottom = get_center().y - halfHeight;
        return p.x >= left && p.x <= right && p.y >= bottom && p.y <= top;
    }

   private:
    double width_;
    double height_;
};