// #pragma once
// #include "Complex.h"

// class ComplexPrivate : private Complex {
// public:
//     using Complex::Complex; // Наслідуємо конструктори базового класу Complex

//     // Якщо потрібно, додаткові методи чи перевантажені оператори можна визначити тут
// };

#pragma once
#include "Complex.h"

class ComplexPrivate : private ComplexBase {
public:
    // Власний конструктор для ініціалізації базового класу Complex
    ComplexPrivate(double r, double i) : ComplexBase(r, i) {}
    ComplexPrivate() : ComplexBase(0.0, 0.0) {}

    // Оголошення перевантажених операторів
    // ComplexPrivate operator+(const ComplexPrivate& secondNum);
    // ComplexPrivate operator*(const ComplexPrivate& secondNum);
    // bool operator==(const ComplexPrivate& secondNum);
    friend ComplexPrivate operator+(const ComplexPrivate& firstNum, const ComplexPrivate& secondNum);
    friend ComplexPrivate operator*(const ComplexPrivate& firstNum, const ComplexPrivate& secondNum);
    friend bool operator==(const ComplexPrivate& firstNum, const ComplexPrivate& secondNum);
    ComplexPrivate& operator++();
    ComplexPrivate operator++(int);
    ComplexPrivate& operator--();
    ComplexPrivate operator--(int);

    ComplexPrivate& operator=(const ComplexPrivate& secondComplex);
    operator string() const;

    // void setReal(double r) { ComplexBase::real = r; }
    // void setImaginary(double i) { ComplexBase::imaginary = i; }
    friend ostream& operator<<(ostream& out, const ComplexPrivate& obj);
    friend istream& operator>>(istream& in, ComplexPrivate& obj);
};
