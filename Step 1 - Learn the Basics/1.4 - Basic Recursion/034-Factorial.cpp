#include <bits/stdc++.h>
using namespace std;

// Calculates factorial using parameterised recursion
void factParameterised(int i, int product)
{
    if (i < 1)
    {
        cout << product << endl;
        return;
    }
    factParameterised(i - 1, product * i);
}

// Calculates factorial using functional recursion
int factFunctional(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factFunctional(n - 1);
}

// Calculates factorial using backtracking
void factBacktracking(int i, int &product)
{
    if (i < 1)
        return;
    factBacktracking(i - 1, product);
    product *= i;
}
int main()
{
    int n = 5;

    factParameterised(n, 1);
    cout << factFunctional(n) << endl;

    int totalProduct = 1;
    factBacktracking(n, totalProduct);
    cout << totalProduct << endl;
}