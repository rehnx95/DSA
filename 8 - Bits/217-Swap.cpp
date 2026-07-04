#include <iostream>

int main() {
    int a = 10;
    int b = 50;

    // XOR Swap Algorithm (requires no extra memory buffer)
    a = a ^ b;
    b = a ^ b; // original a value is recovered
    a = a ^ b; // original b value is recovered

    std::cout << "After swapping -> a: " << a << ", b: " << b << "\n";
    return 0;
}
