#include <iostream>

int main() {
    int n = 13; // Binary: 1101
    int i = 2;  // 0-indexed position from right

    // Shift 1 left by i positions to create a mask, then AND with n
    bool isSet = (n & (1 << i)) != 0;

    std::cout << "Is the " << i << "-th bit of " << n << " set? " 
              << (isSet ? "Yes" : "No") << "\n";

    return 0;
}
