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

    int sum = 0;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << endl;
    }
     cout << "the sum of digit of matrix is: "<<sum << endl;

    
}