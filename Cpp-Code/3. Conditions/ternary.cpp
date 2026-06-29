#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter num ";
    cin >> n;
    // (condition) ? if true : if false ;
    (n % 2 == 0) ? cout << "even" : cout << "odd";

    return 0;
}