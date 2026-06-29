#include <iostream>
using namespace std;


int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

// sum(4) = 4 + sum(3)
// sum(4) = 4 + 3 + sum(2)
// sum(4) = 4 + 3 + 2 + sum(1)
// sum(4) = 4 + 3 + 2 + 1
// sum(4) = 10  


int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}


