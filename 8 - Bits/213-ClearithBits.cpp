#include <iostream>

int main() {
    int n = 14; // Binary: 1110
    int i = 2;  // Target position to clear (turn to 0)

    // Invert the mask (~ button) to get 1s everywhere except at position i, then AND
    int result = n & ~(1 << i);

    std::cout << "Result after clearing " << i << "-th bit of " << n << ": " << result << "\n"; // Outputs 10 (1010)
    return 0;
}
