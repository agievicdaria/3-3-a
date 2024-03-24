#include "ComplexPrivate.h"

// Реалізація перевантажених операторів
// ComplexPrivate ComplexPrivate::operator+(const ComplexPrivate& secondNum) {
//     return ComplexPrivate(this->real + secondNum.real, this->imaginary + secondNum.imaginary);
// }

// ComplexPrivate ComplexPrivate::operator*(const ComplexPrivate& secondNum) {
//     return ComplexPrivate(this->real * secondNum.real - this->imaginary * secondNum.imaginary, this->real * secondNum.imaginary + this->imaginary * secondNum.real);
// }

// bool ComplexPrivate::operator==(const ComplexPrivate& secondNum) {
//     return (this->real == secondNum.real) && (this->imaginary == secondNum.imaginary);
// }

ComplexPrivate operator+(const ComplexPrivate& firstNum, const ComplexPrivate& secondNum) {
    return ComplexPrivate(firstNum.real + secondNum.real, firstNum.imaginary + secondNum.imaginary);
}

ComplexPrivate operator*(const ComplexPrivate& firstNum, const ComplexPrivate& secondNum) {
    return ComplexPrivate(firstNum.real * secondNum.real - firstNum.imaginary * secondNum.imaginary, 
                          firstNum.real * secondNum.imaginary + firstNum.imaginary * secondNum.real);
}

bool operator==(const ComplexPrivate& firstNum, const ComplexPrivate& secondNum) {
    return (firstNum.real == secondNum.real) && (firstNum.imaginary == secondNum.imaginary);
}

ComplexPrivate& ComplexPrivate::operator++() {
    // ++this->real;
    real++;
    return *this;
}

ComplexPrivate ComplexPrivate::operator++(int) {
    ComplexPrivate c(*this);
    // ++(*this);
    --imaginary;
    return c;
}

ComplexPrivate& ComplexPrivate::operator--() {
    // --this->real;
    real++;
    return *this;
}

ComplexPrivate ComplexPrivate::operator--(int) {
    ComplexPrivate c(*this);
    // --(*this);
    --imaginary;
    return c;
}

ComplexPrivate& ComplexPrivate::operator=(const ComplexPrivate& secondComplex) {
    if (this != &secondComplex) {
        this->real = secondComplex.real;
        this->imaginary = secondComplex.imaginary;
    }
    return *this;
}

ComplexPrivate::operator string() const {
    stringstream ss;
    ss << "(" << real << ", " << imaginary << ")";
    return ss.str();
}

ostream& operator<<(ostream& out, const ComplexPrivate& obj) {
    out << "(" << obj.real << ", " << obj.imaginary << ")";
    return out;
}

std::istream& operator>>(std::istream& in, ComplexPrivate& obj) {
    std::cout << "Enter real part: ";
    in >> obj.real;
    std::cout << "Enter imaginary part: ";
    in >> obj.imaginary;
    return in;
}