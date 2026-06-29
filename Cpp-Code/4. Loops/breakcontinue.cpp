#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 40; i++)
    {
        cout << i << endl;

        if (i == 6)
        {
            break; // stop at 6
        }
    }
}

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 40; i++)
    {
        if (i == 6)
        {
            continue; // skip 6
        }
        cout << i << endl;
    }

    return 0;
}