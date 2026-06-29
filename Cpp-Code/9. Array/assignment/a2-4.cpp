#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 3, 4, 5, 2, 7, 6};
    int diff = 0;
    for (int i = 0; i < 7; i ++)
    {
        if (i % 2 == 0)
        {
            diff = diff - a[i];
        }
        else
        {
            diff = diff + a[i];
        }
    }
    cout << diff;
}