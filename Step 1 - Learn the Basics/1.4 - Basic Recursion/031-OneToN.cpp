#include <bits/stdc++.h>
using namespace std;

// Prints 1 to n using standard recursion
void oneton(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    oneton(i + 1, n);
}

// Prints 1 to n using backtracking
void onetonbactrack(int i, int n)
{
    if (i < 1)
        return;
    onetonbactrack(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n = 5;

    oneton(1, n);
    onetonbactrack(n, n);
}