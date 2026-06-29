#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 2, 7};
    int n = sizeof(arr) / 4;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << &arr[i] << endl;
    }
}