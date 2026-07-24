#include <bits/stdc++.h>
using namespace std;

int getElement(int r, int c) {
    long long res = 1;
    for (int i = 0; i < c - 1; i++) {
        res = res * (r - 1 - i);
        res = res / (i + 1);
    }
    return (int)res;
}

vector<int> getRow(int r) {
    vector<int> row;
    long long ans = 1;
    row.push_back(ans);
    for (int i = 1; i < r; i++) {
        ans = ans * (r - i);
        ans = ans / i;
        row.push_back(ans);
    }
    return row;
}

vector<vector<int>> generateTriangle(int numRows) {
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++) {
        vector<int> row;
        long long val = 1;
        for (int j = 0; j <= i; j++) {
            row.push_back(val);
            val = val * (i - j) / (j + 1);
        }
        ans.push_back(row);
    }
    return ans;
}

int main() {
    int rowIdx = 5, colIdx = 3;
    cout << getElement(rowIdx, colIdx) << "\n";

    int targetRow = 5;
    vector<int> row = getRow(targetRow);
    for (int x : row) {
        cout << x << " ";
    }
    cout << "\n";

    int totalRows = 5;
    vector<vector<int>> triangle = generateTriangle(totalRows);
    for (int i = 0; i < triangle.size(); i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
