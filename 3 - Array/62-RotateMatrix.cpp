#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> rotateClockwise(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     vector<vector<int>> rotated(n, vector<int>(n));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             rotated[j][n - i - 1] = matrix[i][j];
//         }
//     }
//     return rotated;
// }

void rotateClockwise(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            // Swap element at (i, j) with (j, i) to transpose
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; ++i)
    {
        // Reverse the current row to complete clockwise rotation
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // for (int i = 0; i < mat.size(); i++)
    // {
    //     for (int j = 0; j < mat[i].size(); j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    
    // vector<vector<int>> rotated = rotateClockwise(mat);
    // // Print the rotated matrix
    // for(int i = 0; i < rotated.size(); i++) {
    //     for(int j = 0; j < rotated[i].size(); j++) {
    //         cout << rotated[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    rotateClockwise(mat);
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
