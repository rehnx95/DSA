#include <iostream>
using namespace std;

int main()
{

    float r, a, n;
    cout << "enter first term ";
    cin >> a;
    cout << "enter common ratio ";
    cin >> r;
    cout << "enter number of terms ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * r;         
    }

    return 0;
}