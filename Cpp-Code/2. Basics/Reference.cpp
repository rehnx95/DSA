#include <iostream>
using namespace std;
int main()
{

    int x = 7;
    int &y = x;

    // y = 3;
    int a = y;
    cout << a << endl;
    cout << x << endl;
    cout << y;
}
