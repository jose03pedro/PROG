#include <cmath>
#include <iostream>
using namespace std;

class Fraction {
   public:
    Fraction() : numerator_(0), denominator_(1) { normalise(); }

    Fraction(int numerator, int denominator)
        : numerator_(numerator), denominator_(denominator) {
        normalise();
    }

    int numerator() const { return numerator_; }
    int denominator() const { return denominator_; }

    Fraction sum(const Fraction& right) const {
        int num =
            numerator_ * right.denominator() + denominator_ * right.numerator();
        int den = denominator_ * right.denominator();
        return Fraction(num, den);
    }

    Fraction sub(const Fraction& right) const {
        int num =
            numerator_ * right.denominator() - denominator_ * right.numerator();
        int den = denominator_ * right.denominator();
        return Fraction(num, den);
    }

    Fraction mul(const Fraction& right) const {
        int num = numerator_ * right.numerator();
        int den = denominator_ * right.denominator();
        return Fraction(num, den);
    }

    Fraction div(const Fraction& right) const {
        int num = numerator_ * right.denominator();
        int den = denominator_ * right.numerator();
        return Fraction(num, den);
    }

    void write() const { cout << numerator_ << '/' << denominator_; }

   private:
    int numerator_;
    int denominator_;

    int gcd(int a, int b) {
        while (b != 0) {
            int tmp = a;
            a = b;
            b = tmp % b;
        }
        return a;
    }

    void normalise() {
        int g = gcd(numerator_, denominator_);
        numerator_ /= g;
        denominator_ /= g;
        if (denominator_ < 0) {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
    }
};
