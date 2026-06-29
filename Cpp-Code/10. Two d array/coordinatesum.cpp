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
    int x1, y1;
    int x2, y2;
    cout << "first coordinate: ";
    cin >> x1 >> y1;
    cout << "second coordinate: ";
    cin >> x2 >> y2;

    int sum = 0;
    for (int i = y1; i <= y2; i++)
    {
        for (int j = x1; j <= x2; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << endl;
    }
    cout << "the sum of digit in that coordinate of matrix is: " << endl;
    cout << sum;
}