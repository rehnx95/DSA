#include <iostream>
using namespace std;

float moneyrecieved(int currentmoney, float interest = 1.05)
{
    // interest 1.05 is default
    return currentmoney * interest;
}
int main()
{
    int money;
    char type;
    cout << "Your Balance: ";
    cin >> money;
    cout << "You are VIP or not (Y/N) ";
    cin >> type;

    if (type == 'Y')
    {
        cout << "Your balance is " << money << " your bank balance is " << moneyrecieved(money, 1.1) << endl;
        return 0;
    }
    else
    {
        cout << "Your balance is " << money << " your bank balance is " << moneyrecieved(money) << endl;
        return 0;
    }
}
