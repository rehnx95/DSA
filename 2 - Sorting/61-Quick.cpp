#include <iostream>
#include <vector>
using namespace std;

int partion(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quick(int arr[], int low, int high)
{
    if (low < high)
    {
        int pindex = partion(arr, low, high);
        quick(arr, low, pindex - 1);
        quick(arr, pindex + 1, high);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 8};
    quick(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}