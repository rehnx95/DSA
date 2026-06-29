#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter sides of triangle " << endl;
    cin >> a >> b >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        cout << "valid triangle ";
    }
    else
    {
        cout << "invalid triangle ";
    }

    return 0;
}