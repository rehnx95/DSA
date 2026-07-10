#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 5, 4, 3, 9};
    int num = 3;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            cout << i + 1;
            break;
        }
    }
}