#include <iostream>
#include <climits>
#include <cmath>

int divide(int dividend, int divisor)
{
    // Handle overflow edge case
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    if (dividend == INT_MIN && divisor == 1)
        return INT_MIN;

    // Use long long to prevent overflow during absolute conversion
    long long n = std::abs((long long)dividend);
    long long d = std::abs((long long)divisor);
    int ans = 0;

    // Perform division using bit shifts
    while (n >= d)
    {
        int count = 0;

        // Ensure shifting does not overflow 64-bit integer limits
        while ((d << (count + 1)) > 0 && n >= (d << (count + 1)))
        {
            count++;
        }

        ans += (1 << count);
        n -= (d << count);
    }

    // Apply correct sign to the result
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        return -ans;
    }
    return ans;
}

int main()
{
    // Example 1
    int dividend1 = 10, divisor1 = 3;
    std::cout << "Input: dividend = " << dividend1 << ", divisor = " << divisor1 << "\n";
    std::cout << "Output: " << divide(dividend1, divisor1) << "\n\n";

    // Example 2
    int dividend2 = 7, divisor2 = -3;
    std::cout << "Input: dividend = " << dividend2 << ", divisor = " << divisor2 << "\n";
    std::cout << "Output: " << divide(dividend2, divisor2) << "\n\n";

    // Edge Case: 32-bit Integer Overflow
    int dividend3 = INT_MIN, divisor3 = -1;
    std::cout << "Input: dividend = " << dividend3 << " (INT_MIN), divisor = " << divisor3 << "\n";
    std::cout << "Output: " << divide(dividend3, divisor3) << " (INT_MAX)\n";

    return 0;
}
