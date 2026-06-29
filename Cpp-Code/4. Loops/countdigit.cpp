#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;


    int x = 0;
    
    while (n != 0)
    {                   
        n = n / 10; // n=1234           x=0     //(couse it is integer)
        x++;        // n/10=123         x=1
                    // n/10=12          x=2
                    // n/10=1           x=3
                    // n/10=0           x=4
    }
    cout << x;

    return 0;
}