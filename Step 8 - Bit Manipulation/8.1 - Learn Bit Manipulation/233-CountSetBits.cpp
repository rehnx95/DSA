#include <iostream>

int main()
{
    int n = 13; // Binary: 11101
    int count = 0;
    int original_n = n;

    // Brian Kernighan's Algorithm: Loops exactly as many times as there are set bits
    // while (n > 0) {
    //     n = n & (n - 1); // Clears the lowest set bit
    //     count++;
    // }

    // for (int i = 0; i < 32; i++)
    // {
    //     if (n & (1 << i))
    //     {
    //         count++;
    //     }
    // }

    while (n)
    {
        count += n & 1;
        n = n >> 1;
    }

    std::cout << "Number of set bits in " << original_n << " is: " << count << "\n";

    return 0;
}
