#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int minprice = arr[0];
    int maxprofit = 0;

    for (int i = 0; i < 6; i++)
    {
        minprice = min(minprice, arr[i]);
        maxprofit = max(maxprofit, arr[i] - minprice);
    }
    cout << maxprofit;
}