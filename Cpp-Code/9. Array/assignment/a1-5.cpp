#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[4] = {1, 2, 3, 4};
    int x = 1;
    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] != x)
        {
            cout << x;
            flag = true;
            break;
        }
        else
        {
            x++;
        }
    }
    if (flag == false)
    {
        cout << x;
    }
}