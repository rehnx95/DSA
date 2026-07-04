#include <iostream>

int main() {
    int n = 11; // Binary: 1011

    // Adding 1 flips the rightmost 0 and resets trailing 1s. ORing merges them.
    int result = n | (n + 1);

    std::cout << "Result after setting rightmost unset bit of " << n << ": " << result << "\n"; // Outputs 15 (1111)
    return 0;
}
