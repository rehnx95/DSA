#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "number of digit ";
    cin >> n;
    int a[n];

    cout << "enter digits ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)   // check non zero and add to a[]
        {
            a[count] = a[i];
            count++;
        }
    }
    for (int i = count; i < n; i++)  
    {
        a[i] = 0;   // add zero to a[] in end 
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}