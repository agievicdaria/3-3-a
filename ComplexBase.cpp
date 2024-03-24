#include "ComplexBase.h"

ComplexBase::ComplexBase(double r, double i) : real(r), imaginary(i) {}

ComplexBase::ComplexBase() : real(0.0), imaginary(0.0) {}

ComplexBase::ComplexBase(const ComplexBase& secondcomplex) : real(secondcomplex.real), imaginary(secondcomplex.imaginary) {}

istream& operator>>(istream& in, ComplexBase& obj) {
    cout << "Enter real part: ";
    in >> obj.real;
    cout << "Enter imaginary part: ";
    in >> obj.imaginary;
    return in;
}

ostream& operator<<(ostream& out, const ComplexBase& obj) {
    out << "(" << obj.real << ", " << obj.imaginary << ")";
    return out;
}
