#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int> &bills)
{
    int five = 0;
    int ten = 0;

    for (int i = 0; i < bills.size(); i++)
    {
        if (bills[i] == 5)
        {
            five++;
        }
        else if (bills[i] == 10)
        {
            ten++;
            if (five != 0)
            {
                five--;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (five >= 1 && ten >= 1)
            {
                five--;
                ten--;
            }
            else if (five >= 3)
            {
                five = five - 3;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<int> bills = {5, 5, 5, 10, 20};

    if (lemonadeChange(bills))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
