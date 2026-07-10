#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[4][4] = {{1, 3, 5, 7},
                        {10, 11, 16, 20},
                        {23, 30, 34, 60},
                        {62, 65, 68, 70}};
    int n = 4, m = 4;
    int target = 23;

    // brute is simple n*m;
    
    // optimal
    int low = 0;
    int high = (n * m) - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / m;
        int column = mid % m;
        if (matrix[row][column] == target)
        {
            cout << true;
            return 0;
        }
        else if (matrix[row][column] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << false;
}