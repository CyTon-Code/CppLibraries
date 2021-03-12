#include <iostream>
#include "lib/tmf.h"

// section main
int main() {
    int x1 = 10, x2 = 20;
    cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    swap(x1, x2); // Передаём ссылки
    cout << "x1 = " << x1 << ", x2 = " << x2 << endl;

    return 0;
}