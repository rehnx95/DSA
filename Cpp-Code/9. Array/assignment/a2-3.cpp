#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 3, 6, 7, 8};
    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "not sorted";
    }
    else
    {
        cout << "sorted ";
    }
}