#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 2, 6};
    int *ptr = arr;
    // int *ptr = &arr[0]; valid
    //  int* ptr = arr[0]; not valid

    cout << ptr << endl; // address of arr[0]
    // ptr[0] = 9;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << ptr[i]<<" ";
    // }

    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << " ";
        ptr++; // arithmetic incre pointer
    }
    cout << endl;

    ptr = arr; // ptr point to 0th index

    *ptr = 8;
    ptr++; // ptr point to 1th index

    *ptr = 9;
    ptr--; // ptr point to 0th index

    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << " ";
        ptr++; // arithmetic incre pointer
    }

    ptr = arr; // ptr point to 0th index
}