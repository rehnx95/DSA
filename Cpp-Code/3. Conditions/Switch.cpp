#include <iostream>
using namespace std;
int main()
{

    int age;
    cout << "Age ";
    cin >> age;

    switch (age)
    {

    case 1:
        cout << "you are 1 " << endl;
        break;

    case 18:
        cout << "you are 18 " << endl;
        break;

    default:
        cout << "Not in directory" << endl;
        break;
    }

    cout << "Done";

    return 0;
}