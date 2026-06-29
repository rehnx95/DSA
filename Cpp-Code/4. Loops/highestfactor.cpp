#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n ";
    cin >> n;

    int f = 1; // store highest factor 
    
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
            f = i;
    }

    cout << f;

    return 0;
}