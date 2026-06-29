#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    cout << x << endl;

    int *p = &x;
    cout << p << endl;  // p variable me x ka address
    cout << &x << endl; // x ka adress
    cout << *p << endl; // p me jo address h uska value / star operator
    *p = 23;            // p me jo address h us address me jo value h usko change kro
    cout << x << endl;
}