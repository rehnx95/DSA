#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 4, 6, 7, 9, 11, 12};
    int target = 3;
    int n = 7;
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            cout << arr[mid] << " " << mid << endl;
            return 0;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << "not " << endl;
}

