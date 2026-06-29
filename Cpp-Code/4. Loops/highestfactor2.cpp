#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n ";
    cin >> n;

    for (int i = n / 2; i >= 1; i--)  // start from n/2 
                                      // eg n=12, i=6,5,4,3,2,1.....
    {
        if (n % i == 0)               // 12/6=0 satisfy so it print i=6
        {
            cout << i << " ";
            break;                    // if no break factor will print in reverse order
        } 
    }

    return 0;
}