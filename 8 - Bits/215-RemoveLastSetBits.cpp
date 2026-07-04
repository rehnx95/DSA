#include <iostream>

int main() {
    int n = 12; // Binary: 1100

    // Subtracting 1 flips all bits after the lowest set bit. ANDing removes it.
    int result = n & (n - 1);

    std::cout << "Result after removing the last set bit of " << n << ": " << result << "\n"; // Outputs 8 (1000)
    return 0;
}
