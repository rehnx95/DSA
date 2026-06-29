#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute
    // tc=nlogn
    // use merge sort then last element

    // optimal tc n
    int arr[] = {2, 5, 4, 3, 7};
    int largest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest;
}