#include <bits/stdc++.h>
using namespace std;

// Prints "rehan" n times
void print(int n)
{
    if (n == 0)
        return;
    cout << "rehan" << endl;
    print(n - 1);
}

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

// Reverses an array using a single pointer
void reverse(vector<int> &arr, int i)
{
    int n = arr.size();
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverse(arr, i + 1);
}

// Checks if an array is a palindrome
bool palindrom(vector<int> &arr, int i)
{
    int n = arr.size();
    if (i >= n / 2)
        return true;
    if (arr[i] != arr[n - i - 1])
        return false;
    return palindrom(arr, i + 1);
}

// Calculates the nth Fibonacci number using multiple recursive calls
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n = 5;

    print(n);
    oneton(1, n);
    onetonbactrack(n, n);
    ntoone(n, n);
    ntoonebacktrack(1, n);

    sumParameterised(n, 0);
    cout << sumFunctional(n) << endl;

    int totalSum = 0;
    sumBacktracking(n, totalSum);
    cout << totalSum << endl;

    factParameterised(n, 1);
    cout << factFunctional(n) << endl;

    int totalProduct = 1;
    factBacktracking(n, totalProduct);
    cout << totalProduct << endl;

    vector<int> arr = {1, 2, 3, 2, 1};
    reverse(arr, 0);
    cout << palindrom(arr, 0) << endl;

    cout << fibo(n) << endl;

    return 0;
}
