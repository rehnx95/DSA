#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[12] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cout << "enter how many queries: ";
    cin >> q;
    while (q--)
    {
        int num;
        cout << "enter num to find occurance: ";
        cin >> num;
        cout << hash[num] << endl;
    }
}

// string occurance

// #include <iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     int hash[26] = {0};
//     // int hash[256] = {0};

//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//         // hash[s[i]]++;

//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cin >> c;
//         cout << hash[c - 'a'] << endl;
//         // cout << hash[c] << endl;

//     }
// }