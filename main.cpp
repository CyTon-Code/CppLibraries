#include <iostream>

#include "lib/tmf.h"

using std::cout, std::endl;
//using namespace std;

// section main
int main() {
    int x1 = 10, x2 = 20;
    cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    swap(x1, x2); // Передаём ссылки
    cout << "x1 = " << x1 << ", x2 = " << x2 << endl;

    return 0;
}



/*
int main() {
    double x, a, c, b, y;

    c = input("c = ");
    a = input("a = ");
    x = input("x = ");

    b = pow(c, 3);
    a = (a * b) + c;
    x = pow(x * a, 2);
    y = sin(a / x) + log10(0.08) * exp(x);

    cout << "y= " << y << endl;
    exit;
}
 */