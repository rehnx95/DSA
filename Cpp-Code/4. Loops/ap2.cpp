#include <iostream>
using namespace std;

int main()
{
        float d, a, n;
        cout << "enter first term ";
        cin >> a;
        cout << "enter common diffrence ";
        cin >> d;
        cout << "enter number of terms ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
                cout << a << " ";
                a = a + d;
        }
}