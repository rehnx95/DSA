#include <iostream>
using namespace std;
// function prototype

// int sum(int a , b); not acceptable
// int sum(int a, int b); acceptable

// used to know that tHis function is available below after main fun
int sum(int, int); 

// void g(void); acceptable
void g();

int main()
{
    int num1, num2;
    cout << "num 1 " << endl;
    cin >> num1;
    cout << "num 2 " << endl;
    cin >> num2;

    // num1 num2 are actual parameter

    cout << "sum is " << sum(num1, num2) << endl;
    cout << "sum iss " << num1 + num2 << endl;
    sum(num1, num2);
    cout << sum(num1, num2);
    g();

    return 0;
}
int sum(int a, int b)
{
    // formal parameter a and b will be taking value from actual paramater num1 num2
    int c = a + b;
    cout << "sumis " << c << endl; // this will print as this alone funtion operation
    return c;                      // this will return to main func and print as main function
}

void g()
{
    cout << "\nHello";
}