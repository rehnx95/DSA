#include <iostream>

int main() {
    int n = 16;

    // A power of 2 has exactly one set bit. n & (n - 1) unsets it.
    bool isPowerOfTwo = (n > 0) && ((n & (n - 1)) == 0);

    std::cout << "Is " << n << " a power of 2? " 
              << (isPowerOfTwo ? "Yes" : "No") << "\n";

    return 0;
}
