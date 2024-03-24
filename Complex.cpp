#include "Complex.h"
#include <sstream>
#include <iostream>
using namespace std;

// Complex::Complex() : real(0.0), imaginary(0.0) {}

// Complex Complex::operator+(const Complex& secondNum) {
//     return Complex(real + secondNum.real, imaginary + secondNum.imaginary);
// }

// Complex Complex::operator*(const Complex& secondNum) {
//     return Complex(real * secondNum.real - imaginary * secondNum.imaginary,
//                     real * secondNum.imaginary + imaginary * secondNum.real);
// }

// bool Complex::operator==(const Complex& secondNum) {
//     return (real == secondNum.real) && (imaginary == secondNum.imaginary);
// }

Complex operator+(const Complex &firstNum, const Complex &secondNum)
{
    return Complex(firstNum.real + secondNum.real, firstNum.imaginary + secondNum.imaginary);
}

Complex operator*(const Complex &firstNum, const Complex &secondNum)
{
    return Complex(firstNum.real * secondNum.real - firstNum.imaginary * secondNum.imaginary,
                   firstNum.real * secondNum.imaginary + firstNum.imaginary * secondNum.real);
}

bool operator==(const Complex &firstNum, const Complex &secondNum)
{
    return (firstNum.real == secondNum.real) && (firstNum.imaginary == secondNum.imaginary);
}

Complex &Complex::operator++()
{
    real++;
    return *this;
}

Complex Complex::operator++(int)
{
    Complex c(*this);
    imaginary++;
    return c;
}

Complex &Complex::operator--()
{
    real--;
    return *this;
}

Complex Complex::operator--(int)
{
    Complex c(*this);
    imaginary--;
    return c;
}

Complex& Complex::operator=(const Complex& secondComplex) {
    if (this != &secondComplex) {
        this->real = secondComplex.real;
        this->imaginary = secondComplex.imaginary;
    }
    return *this;
}

Complex::operator string() const {
    stringstream ss;
    ss << "(" << real << ", " << imaginary << ")";
    return ss.str();
}