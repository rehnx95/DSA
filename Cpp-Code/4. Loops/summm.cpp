#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n != 0)
    {
        int LD = n % 10;
        n = n / 10;
        sum = sum + LD;
    }
    cout<<sum;

    return 0;
}