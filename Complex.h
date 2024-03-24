#pragma once
#include "ComplexBase.h"
#include <sstream>
#include <iostream>
using namespace std;

class Complex : public ComplexBase {
public:
    Complex(double r, double i) : ComplexBase(r, i) {} // Власний конструктор для ініціалізації базового класу
    // Complex();

    // // Визначення конструктора за замовчуванням
    // Complex::Complex() : ComplexBase(0.0, 0.0) {}

    // // Визначення конструктора з параметрами
    // Complex::Complex(double r, double i) : ComplexBase(r, i) {}

    // Complex operator+(const Complex& secondNum);
    // Complex operator*(const Complex& secondNum);
    // bool operator==(const Complex& secondNum);
    friend Complex operator+(const Complex& firstNum, const Complex& secondNum);
    friend Complex operator*(const Complex& firstNum, const Complex& secondNum);
    friend bool operator==(const Complex& firstNum, const Complex& secondNum);
    Complex& operator++();
    Complex operator++(int);
    Complex& operator--();
    Complex operator--(int);

    Complex& operator=(const Complex& secondComplex);
    operator string() const;
};
