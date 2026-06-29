// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "number of digit ";
//     cin >> n;
//     int a[n];

//     cout << "enter digits ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     int count = 1;
//     int value;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 value = a[i];
//                 count++;
//             }
//         }
//         if (count >= 2)
//         {
//             cout << value << " appear " << count << " times " << endl;
//             value = 0;
//             count = 1;
//         }
//     }
// }

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
        int count = 1;

        // skip if already counted before
        bool skip = false;
        for (int k = 0; k < i; k++)
        {
            if (a[k] == a[i])
            {
                skip = true;
                break;
            }
        }

        if (skip)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }

        cout << a[i] << " appear " << count << " times " << endl;
    }
}