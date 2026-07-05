#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 2, 3, 4, 4};
    int xorr = 0;
    for (int i = 0; i < 5; i++)
    {
        xorr = xorr ^ arr[i];
    }
    cout << xorr;
}