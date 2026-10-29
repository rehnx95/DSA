#include <bits/stdc++.h>
using namespace std;
// Prints n to 1 using standard recursion
void ntoone(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    ntoone(i - 1, n);
}

// Prints n to 1 using backtracking
void ntoonebacktrack(int i, int n)
{
    if (i > n)
        return;
    ntoonebacktrack(i + 1, n);
    cout << i << endl;
}
int main()
{
    int n = 5;

    ntoone(n, n);
    ntoonebacktrack(1, n);
}