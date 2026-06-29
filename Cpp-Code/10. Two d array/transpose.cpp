#include <iostream>
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

    cout << "the matrix is: " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    /*
    noraml
    2 3 4
    3 5 9
    tranpose
    2 3
    3 5
    4 9
    */
    cout << "Transpose is " << endl;
    for (int j = 0; j <= n - 1; j++)
    {
        for (int i = 0; i <= m - 1; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}