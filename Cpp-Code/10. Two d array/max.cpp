#include <iostream>
// #include <climits> // method 2

using namespace std;

int main()
{
    int m, n;
    cout << "number of rows: ";
    cin >> m;
    cout << "number of columns: ";
    cin >> n;
    int arr[m][n];

    cout << endl;

    cout << "enter digit in matrix: " << endl;

    for (int i = 0; i <= m - 1; i++)
    {
        cout << "enter digit in " << (i + 1) << " row: ";
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "the matrix is " << endl;

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int mx = arr[0][0];          // intialise               :method 1
    // int mx = INT_MIN;         // INT_MIN = minm possible :method 2

    //  method 1

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i][j] > mx) // can be minimum
            {
                mx = arr[i][j]; // update
            }
        }

        cout << endl;
    }
    cout << "max is " << mx;

    //  method 2

    //     for (int i = 0; i <= m - 1; i++)
    //     {
    //         for (int j = 0; j <= n - 1; j++)
    //         {
    //             mx = max(mx, arr[i][j]); // max is inbuilt function
    //         }
    //         cout << endl;
    //     }
    //     cout << "max is " << mx;
    //
}
