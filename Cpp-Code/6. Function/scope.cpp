#include <iostream>
using namespace std;

int glo = 2;
void sub()
{
    cout << glo<<endl;
}
void sum()
{
    float glo = 2.34;
    cout << glo<<endl;
}

int main()
{
    int glo = 34;
    sub();
    sum();
    cout << glo<<endl;
    cout << ::glo<<endl;

    return 0;
}