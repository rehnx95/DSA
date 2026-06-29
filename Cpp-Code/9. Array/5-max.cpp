#include <iostream>
// #include <climits>  // method 1

using namespace std;

int main()
{
    int n, m;
    cout << "number of digit ";
    cin >> n;
    int arr[n];

    cout << "enter digits ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int mx = arr[0]; // intialise               :method 1
    // int mx = INT_MIN;       
    // INT_MIN = minm possible :method 2

    //  method 1

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > mx) // can be minimum
        {
            mx = arr[i];
            m = i;
            // update
        }
    }
    cout << "max is found at " << (m + 1) << " is " << mx;

    cout << endl;

    //  method 2

    // for (int i = 0; i <= n - 1; i++)
    // {
    //     mx = max(mx, arr[i]);   // max is inbuilt function
    // }
    // cout << "max is " << mx;
}
