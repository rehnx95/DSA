#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute tc n sc 1
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int count = 0;
    int mxx = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            mxx = max(mxx, count);
        }
        else
        {
            count = 0;
        }
    }
    cout << mxx<<endl;
}
