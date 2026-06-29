#include <iostream>
using namespace std;
int main()
{

    float a = 32.2;
    long double b = 32.2;
    cout << sizeof(32.2) << endl;
    cout << sizeof(32.2f) << endl;
    cout << sizeof(32.2l) << endl;
}
