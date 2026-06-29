// #include <iostream>
// #include <vector>
// using namespace std;

// void factorial(int n) {
//     vector<int> res;
//     res.push_back(1); // initial value = 1

//     for(int x = 2; x <= n; x++) {
//         int carry = 0;

//         for(int i = 0; i < res.size(); i++) {
//             int val = res[i] * x + carry;
//             res[i] = val % 10;
//             carry = val / 10;
//         }

//         while(carry) {
//             res.push_back(carry % 10);
//             carry /= 10;
//         }
//     }

//     // print result in reverse
//     for(int i = res.size() - 1; i >= 0; i--) {
//         cout << res[i];
//     }
// }

// int main() {
//     int n = 100;
//     factorial(n);
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

void factorial(int n)
{
    vector<int> fact;
    fact.push_back(1);
    for (int x = 2; x <= n; x++)
    {
        int carry = 0;
        for (int i = 0; i < fact.size(); i++)
        {
            int value = fact[i] * x + carry;
            fact[i] = value % 10;
            carry = value / 10;
        }
        while (carry)
        {
            fact.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (int i = fact.size()-1; i >= 0; i--)
    {
        cout << fact[i];
    }
}
int main()
{
    int n;
    cin >> n;
    factorial(n);
}
