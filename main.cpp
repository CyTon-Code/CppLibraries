#include <iostream>
#include "lib/tmf.h"

// section main
int main() {
    cout << len("21") << endl;
    int a = 20, b = 10;
    str x = "1";
    str y = "12";
    cout << a << " " << b << endl;
    cout << x << " " << y << endl;
//    swap_xor(a, b);
//    swap_operator(x, y);
    swap_copy(x, y);
    cout << a << " " << b << endl;
    cout << x << " " << y << endl;
    return 0;
}