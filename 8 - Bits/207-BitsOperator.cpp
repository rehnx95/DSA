#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5; // Binary: 00000101
    int b = 3; // Binary: 00000011

    std::cout << "--- INPUT VALUES ---\n";
    std::cout << "a = " << a << " \t(Binary: " << std::bitset<8>(a) << ")\n";
    std::cout << "b = " << b << " \t(Binary: " << std::bitset<8>(b) << ")\n\n";

    std::cout << "--- BITWISE OPERATIONS ---\n";

    // 1. Bitwise AND (&)
    std::cout << "AND (a & b)       = " << (a & b)
              << " \t(Binary: " << std::bitset<8>(a & b) << ")\n";

    // 2. Bitwise OR (|)
    std::cout << "OR  (a | b)       = " << (a | b)
              << " \t(Binary: " << std::bitset<8>(a | b) << ")\n";

    // 3. Bitwise XOR (^)
    std::cout << "XOR (a ^ b)       = " << (a ^ b)
              << " \t(Binary: " << std::bitset<8>(a ^ b) << ")\n";

    // 4. Bitwise NOT (~) -> Formula: -(x + 1)
    std::cout << "NOT (~a)          = " << (~a)
              << " \t(Binary: " << std::bitset<8>(~a) << ")\n";

    // 5. Left Shift (<<) -> Multiplies by 2
    std::cout << "Left Shift(a<<1)  = " << (a << 1)
              << " \t(Binary: " << std::bitset<8>(a << 1) << ")\n";

    // 6. Right Shift (>>) -> Divides by 2
    std::cout << "Right Shift(a>>1) = " << (a >> 1)
              << " \t(Binary: " << std::bitset<8>(a >> 1) << ")\n";
}