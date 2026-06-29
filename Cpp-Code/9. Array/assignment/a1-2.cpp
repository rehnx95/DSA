#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int a[] = {1, 4, 6, 9, 2, 3};
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        if (max1 < a[i])
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (max2 < a[i] && a[i] != max1)
        {
            max2 = a[i];
        }
    }
    cout << max1 << " " << max2;
}