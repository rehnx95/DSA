#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "num ";
    cin >> n;
    int count = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    if (count <= 1)
    {
        cout << "prime";
    }
}