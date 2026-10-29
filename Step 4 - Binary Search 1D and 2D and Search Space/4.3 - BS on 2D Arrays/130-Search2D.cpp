#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[4][4] = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}, {10, 12, 13, 17}};
    int target = 14;
    int m = 4;
    int n = 4;
    int row = 0;
    int column = m - 1;
    while (row < n && column >= 0)
    {
        if (matrix[row][column] == target)
        {
            cout << true;
            return 0;
        }
        else if (matrix[row][column] > target)
        {
            column--;
        }
        else
        {
            row++;
        }
    }
    cout << false;
    return 0;
}