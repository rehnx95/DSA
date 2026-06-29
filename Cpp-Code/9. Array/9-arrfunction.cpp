#include <iostream>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void change(int x[], int size)
// int x[]=arr[]
// array are pass by refrence
{
    x[1] = 9;
}

int main()
{
    int arr[3] = {3, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    change(arr, size);
    display(arr, size);
}