#include <iostream>

#define exit std::cout << "[Program Finished]\n";return(0)

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << " ";
    }

    std::cout << std::endl;
    std::cout << "Hello, World!" << std::endl;

    exit;
}
