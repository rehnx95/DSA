#include <iostream>
#include <climits> // method 2

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

    // int mn = arr[0][0];    // intialise               :method 1
    int mn = INT_MAX;         // INT_MAX = maxm possible :method 2

    //  method 1

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i][j] > mn) // can be minimum
            {
                mn = arr[i][j]; // update
            }
        }

        cout << endl;
    }
    cout << "max is " << mn;

    //  method 2

        // for (int i = 0; i <= m - 1; i++)
        // {
        //     for (int j = 0; j <= n - 1; j++)
        //     {
        //         mn = min(mn, arr[i][j]); // min is inbuilt function
        //     }
        //     cout << endl;
        // }
        // cout << "min is " << mn;
    
}
