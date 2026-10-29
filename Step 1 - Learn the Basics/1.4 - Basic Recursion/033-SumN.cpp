#include <bits/stdc++.h>
using namespace std;

// Calculates sum of 1 to n using parameterised recursion
void sumParameterised(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    sumParameterised(i - 1, sum + i);
}

// Calculates sum of 1 to n using functional recursion
int sumFunctional(int n)
{
    if (n == 0)
        return 0;
    return n + sumFunctional(n - 1);
}

// Calculates sum of 1 to n using backtracking
void sumBacktracking(int i, int &sum)
{
    if (i < 1)
        return;
    sumBacktracking(i - 1, sum);
    sum += i;
}
int main()
{
    int n = 5;
    sumParameterised(n, 0);
    cout << sumFunctional(n) << endl;

    int totalSum = 0;
    sumBacktracking(n, totalSum);
    cout << totalSum << endl;
}