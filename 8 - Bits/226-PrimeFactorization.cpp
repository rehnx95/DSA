#include <iostream>
#include <vector>

// Function to find prime factors of a single number
std::vector<int> getPrimeFactors(int num)
{
    std::vector<int> factors;

    // Check for divisibility starting from 2 up to sqrt(num)
    for (int i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            factors.push_back(i); // i is a prime factor
            num /= i;             // Reduce the number
        }
    }

    // If num is still greater than 1, the remaining part is a prime number
    if (num > 1)
    {
        factors.push_back(num);
    }

    return factors;
}

// Main function to process multiple queries
std::vector<std::vector<int>> primeFactorization(std::vector<int> &queries)
{
    std::vector<std::vector<int>> result;

    for (int num : queries)
    {
        result.push_back(getPrimeFactors(num));
    }

    return result;
}

int main()
{
    std::vector<int> queries = {7, 12, 18};
    std::vector<std::vector<int>> ans = primeFactorization(queries);

    // Print output
    for (const auto &vec : ans)
    {
        std::cout << "[ ";
        for (int x : vec)
            std::cout << x << " ";
        std::cout << "] ";
    }
    return 0;
}
