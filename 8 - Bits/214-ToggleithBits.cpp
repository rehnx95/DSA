#include <iostream>

int main() {
    int n = 10; // Binary: 1010
    int i = 2;  // Target position to toggle (flip value)

    // Use XOR operator to flip the state of the targeted bit position
    int result = n ^ (1 << i);

    std::cout << "Result after toggling " << i << "-th bit of " << n << ": " << result << "\n"; // Outputs 14 (1110)
    return 0;
}
