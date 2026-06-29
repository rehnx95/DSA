#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        if (x > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = x;
        }
        else if (x > max2 && x != max1)
        {
            max3 = max2;
            max2 = x;
        }
        else if (x > max3 && x != max2 && x != max1)
        {
            max3 = x;
        }
    }
    cout << max1 << " " << max2 << " " << max3;
}