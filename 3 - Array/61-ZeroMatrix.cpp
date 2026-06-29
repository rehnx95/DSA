#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// void row(int i, int matrix[4][4])
// {
//     for (int j = 0; j < 4; j++)
//         if (matrix[i][j] != 0) // don't overwrite original zeros
//             matrix[i][j] = -1;
// }
// void column(int j, int matrix[4][4])
// {
//     for (int i = 0; i < 4; i++)
//         if (matrix[i][j] != 0) // don't overwrite original zeros
//             matrix[i][j] = -1;
// }
int main()
{
    // brute force n^3 approach -
    //     int matrix[4][4] = {{1, 1, 1, 1},
    //                         {1, 0, 1, 1},
    //                         {1, 1, 0, 1},
    //                         {1, 0, 0, 1}};
    //     for (int i = 0; i < 4; i++)
    //     {
    //         for (int j = 0; j < 4; j++)
    //         {
    //             cout << matrix[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;

    //     for (int i = 0; i < 4; i++)
    //     {
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (matrix[i][j] == 0)
    //             {
    //                 row(i, matrix);
    //                 column(j, matrix);
    //                 cout << i << " " << j << endl;
    //             }
    //         }
    //     }
    //     for (int i = 0; i < 4; i++)
    //     {
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (matrix[i][j] == -1)
    //             {
    //                 matrix[i][j] = 0;
    //             }
    //         }
    //     }
    //     for (int i = 0; i < 4; i++)
    //     {
    //         for (int j = 0; j < 4; j++)
    //         {
    //             cout << matrix[i][j] << " ";
    //         }
    //         cout << endl;
    //     }

    //     cout << endl;

    // better approach - using extra space to track rows and columns to be zeroed
    // int matrix[4][4] = {{1, 1, 1, 1},
    //                     {1, 0, 1, 1},
    //                     {1, 1, 0, 1},
    //                     {1, 0, 0, 1}};
    // bool row[4] = {false};
    // bool column[4] = {false};
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (matrix[i][j] == 0)
    //         {
    //             row[i] = true;
    //             column[j] = true;
    //         }
    //     }
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (row[i] || column[j])
    //         {
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // optimal approach - using first row and column as markers
    vector<vector<int>> matrix = {{1, 1, 1, 1},
                                  {1, 0, 1, 1},
                                  {1, 1, 0, 1},
                                  {1, 0, 0, 1}};
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl;

    // Flag to track if first row should be zeroed
    bool firstRowZero = false;
    // Flag to track if first column should be zeroed
    bool firstColZero = false;

    // Check if first row has any zero
    for (int j = 0; j < n; j++)
    {
        if (matrix[0][j] == 0)
        {
            firstRowZero = true;
            break;
        }
    }

    // Check if first column has any zero
    for (int i = 0; i < m; i++)
    {
        if (matrix[i][0] == 0)
        {
            firstColZero = true;
            break;
        }
    }

    // Mark rows and columns in first row/column
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set matrix cells to zero based on markers
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Handle first row
    if (firstRowZero)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[0][j] = 0;
        }
    }

    // Handle first column
    if (firstColZero)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[i][0] = 0;
        }
    }
    // Print the modified matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl;
}