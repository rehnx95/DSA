#include <bits/stdc++.h>
using namespace std;

// int partion(int arr[], int low, int high)
// {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;
//     while (i < j)
//     {
//         while (arr[i] <= pivot && i <= high - 1)
//         {
//             i++;
//         }
//         while (arr[j] > pivot && j >= low + 1)
//         {
//             j--;
//         }
//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }
// void quick(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pindex = partion(arr, low, high);
//         quick(arr, low, pindex - 1);
//         quick(arr, pindex + 1, high);
//     }
// }
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 8};

    // brute tc nlogn
    // quick(arr, 0, 5);
    // int n = 6;
    // int secondlargest = 0;
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     if (arr[i] != arr[n - 1])
    //     {
    //         secondlargest = arr[i];
    //         break;
    //     }
    // }
    // cout << secondlargest;

    // optimal tc n
    int larg = arr[0];
    int seclarg = -1;
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > larg)
        {
            seclarg = larg;
            larg = arr[i];
        }
        else if (arr[i] < larg && arr[i] > seclarg)
        {
            seclarg = arr[i];
        }
    }
    cout << larg << " " << seclarg;
}