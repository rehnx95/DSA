#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "x coordinate ";
    cin >> x;
    cout << "y coordinate ";
    cin >> y;

    if (x > 0 and y > 0)
    {
        cout << "point is in first quadrant ";
    }

    else if (x < 0 and y > 0)
    {
        cout << "point is in second quadrant ";
    }

    else if (x < 0 and y < 0)
    {
        cout << "point is in third quadrant ";
    }

    else if (x == 0 and y == 0)
    {
        cout << "point is at origin ";
    }

    else
    {
        cout << "point is in fourth quadrant ";
    }
    return 0;
}