#include <iostream>

int main() {
    int n = 47;

    // The least significant bit (LSB) is always 1 for odd numbers, 0 for even numbers
    if ((n & 1) == 0) {
        std::cout << n << " is Even\n";
    } else {
        std::cout << n << " is Odd\n";
    }

    return 0;
}
