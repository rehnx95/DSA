#include <iostream>
using namespace std;   // VVVVVI

void print(int n)
{
    if (n == 0)
        return; // base

    print(n - 1);      // call
    cout << n << endl; // work
}
int main()
{
    int n;
    cin >> n;
    print(n);
}


