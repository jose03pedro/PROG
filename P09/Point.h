#ifndef POINT_H
#define POINT_H

class Point {
   public:
    Point(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    double distanceTo(const Point& other) const;
    void show() const;

   private:
    int x, y;
};

#endif