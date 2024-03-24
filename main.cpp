#include "Complex.h"
#include "ComplexPrivate.h"
#include <sstream>
#include <iostream>
using namespace std;

int main() {
    Complex c1(2.0, 5.0);
    Complex c2(3.0, 8.0);
    cout << "Enter complex number c2:" << endl;
    cin >> c2;

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    Complex c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << endl;

    Complex c4 = c1 * c2;
    cout << "c1 * c2 = " << c4 << endl;

    if (c1 == c2) {
        cout << "c1 is equal to c2" << endl;
    } else {
        cout << "c1 is not equal to c2" << endl;
    }

    cout << "c1 before increment: " << c1 << endl;
    ++c1;
    cout << "c1 after prefix increment: " << c1 << endl;
    c1++;
    cout << "c1 after postfix increment: " << c1 << endl;
    --c1;
    cout << "c1 after prefix decrement: " << c1 << endl;
    c1--;
    cout << "c1 after postfix decrement: " << c1 << endl;


    // ComplexPrivate cp1(2.0, 5.0);
    // ComplexPrivate cp2(3.0, 8.0);
    // cout << "Enter complex number cp2:" << endl;
    // cin >> cp2;

    // cout << "cp1: " << cp1 << endl;
    // cout << "cp2: " << cp2 << endl;
    //! 2
    // ComplexPrivate cp1(2.0, 5.0);
    // ComplexPrivate cp2(3.0, 8.0);
    // cout << "Enter complex number cp2:" << endl;
    // // Використовуйте методи для встановлення значень
    // double real, imaginary;
    // cin >> real >> imaginary;
    // cp2.setReal(real);
    // cp2.setImaginary(imaginary);

    // cout << "cp1: " << cp1 << endl;
    // cout << "cp2: " << cp2 << endl;
    //! 3
    ComplexPrivate cp1(2.0, 5.0);
    // ComplexPrivate cp2(3.0, 8.0);
    ComplexPrivate cp2;
    cout << "Enter complex number cp2:" << endl;
    cin >> cp2;

    cout << "cp1: " << cp1 << endl;
    cout << "cp2: " << cp2 << endl;

    // // Використання публічних методів для зміни даних
    // cp1.setReal(4.0);
    // cp1.setImaginary(6.0);
    // cout << "cp1 after modification: " << cp1 << endl;

    ComplexPrivate cp3 = cp1 + cp2;
    cout << "cp1 + cp2 = " << cp3 << endl;

    ComplexPrivate cp4 = cp1 * cp2;
    cout << "cp1 * cp2 = " << cp4 << endl;

    if (c1 == c2) {
        cout << "cp1 is equal to cp2" << endl;
    } else {
        cout << "cp1 is not equal to cp2" << endl;
    }

    return 0;
}
