#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter num ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {                                        // fact * i
        fact = fact * i;                     // fact= 1
    }                                        // fact= 1 * 1
    cout << fact;                            // fact= 1 * 2
                                             // fact= 2 * 3
                                             // fact= 6 * 4
    return 0;
}