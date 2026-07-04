#include <iostream>

int main() {
    int n = 29; // Binary: 11101
    int count = 0;
    int original_n = n;

    // Brian Kernighan's Algorithm: Loops exactly as many times as there are set bits
    while (n > 0) {
        n = n & (n - 1); // Clears the lowest set bit
        count++;
    }

    std::cout << "Number of set bits in " << original_n << " is: " << count << "\n";

    return 0;
}
