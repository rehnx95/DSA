#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    cout << "enter a " << endl;
    cin >> a;
    cout << "enter b " << endl;
    cin >> b;
    cout << "a ix " << a << " b is " << b << endl;

    swap(&a, &b);
    cout << "a ix " << a << " b is " << b << endl;
}