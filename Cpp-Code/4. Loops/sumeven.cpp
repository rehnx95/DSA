#include <iostream>
using namespace std;

// 1254=2+4=6

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n != 0)
    {
        int LD = n % 10;   // STORE LAST DIGIT
        n = n / 10;        // REDUCE ONE DIGIT FROM LAST
        if (LD % 2 == 0)
        {
            sum += LD;
        }
    }
    cout << sum;

    return 0;
}