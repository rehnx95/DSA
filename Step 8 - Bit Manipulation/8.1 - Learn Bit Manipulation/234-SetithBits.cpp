#include <iostream>

int main() {
    int n = 8; // Binary: 1000
    int i = 1; // Target position to set (turn to 1)

    // Use OR operator with a mask to force the bit to 1
    int result = n | (1 << i);

    std::cout << "Result after setting " << i << "-th bit of " << n << ": " << result << "\n"; // Outputs 10 (1010)
    return 0;
}
