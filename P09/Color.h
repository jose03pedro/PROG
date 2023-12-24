#ifndef COLOR_H
#define COLOR_H

class Color{
private:
    unsigned char r,g,b;

public:
    Color(unsigned char r,unsigned char g, unsigned char b);
    Color(const Color& c);
    unsigned char red() const;
    unsigned char green() const;
    unsigned char blue() const;
    bool operator==(const Color& other) const; // here


    bool equal_to(const Color& c) const;
    void invert();

    static const Color RED,GREEN,BLUE,BLACK,WHITE;

};

#endif
