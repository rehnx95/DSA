#include <iostream>
using namespace std;

int main()
{
    // int x = 3;
    // int *p = &x;
    // cout << p << endl; // 0x61ff08
    // p = p + 1;
    // cout << p << endl; // 0x61ff0c

    // bool flag = true;
    // bool *p = &flag;
    // cout << p << endl; // 0x61ff0b
    // p = p + 1;
    // cout << p << endl; // 0x61ff0c

    // int x = 3;
    // int *p = &x;
    // cout << *p << endl; // 3
    // p = p + 1;
    // cout << *p << endl; // 6422284

    int x = 3;
    int *p = &x;
    cout << *p << endl; // 3
    *p = *p + 1;
    // (*p)++;
    cout << *p << endl; // 6422284
    
}