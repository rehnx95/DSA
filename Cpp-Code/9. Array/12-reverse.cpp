#include <iostream>
using namespace std;

/*

i and j are index

i-> 0 1 2 3 4 5
a[]=1 3 4 6 7 8

j-> 0 1 2 3 4 5
b[]=_ _ _ _ _ _

i=5,j=0
i+j=n-1=6-1=5
j=n-1-i

*/

int main()
{
    int n;
    cout << "number of digit ";
    cin >> n;
    int a[n];
    int b[n];

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

    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;
        b[i] = a[j];
        cout << b[i] << " ";
    }

    //   for (int j = n-1; j >= 0 ; j--)
    // {
    //   cout<<a[j]<<" ";
    // }
}
