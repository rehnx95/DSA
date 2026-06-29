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

    // arr[2][3]
    // rows 2 columns 3
    // arr[0][0]=2
    // arr[0][1]=3
    // arr[0][2]=5
    // arr[1][0]=4
    // arr[1][1]=2
    // arr[1][2]=9

   cout << "the matrix is: " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}