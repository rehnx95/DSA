#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "number of digit ";
    cin >> n;
    int arr[n];

    cout << "enter digits ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "duplicate found at ";
                cout << "[" << (i + 1) << "," << (j + 1) << "]" << endl;
                cout << "duplicate element are ";
                cout << arr[i] << "," << arr[j] << endl;
                break;
            }
        }
    }
}