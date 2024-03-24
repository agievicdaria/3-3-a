#pragma once
#include <iostream>
using namespace std;

class ComplexBase {
protected:
    double real;
    double imaginary;

public:
    ComplexBase(double r, double i);
    ComplexBase();
    ComplexBase(const ComplexBase& secondcomplex);
    friend istream& operator>>(istream& in, ComplexBase& obj);
    friend ostream& operator<<(ostream& out, const ComplexBase& obj);
};
