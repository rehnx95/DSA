#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "number of digit ";
    cin >> n;
    int arr[n];

    cout << "enter digits ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
}