#include <iostream>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        if (n == 1)
        {
            cout << n << " is not prime nor composite";
        }
        if (isprime(n))
        {
            cout << n << " is prime";
        }
        else
        {
            cout << n << " is composite";
        }
        cout << endl;
        n--;
    }
}