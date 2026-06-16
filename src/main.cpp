#include "box.hpp"

#include <iostream>

int main() {
    std::cout << "Lab 2, variant 4\n";

    Box defaultBox;
    Box customBox(2.5, 3.0, 4.0);
    Box copiedBox(customBox);

    std::cout << defaultBox.voi() << '\n';
    std::cout << customBox.voi() << '\n';
    std::cout << copiedBox.voi() << '\n';

    return 0;
}

