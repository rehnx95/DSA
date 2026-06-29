#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v(5);    // intial size=5 , each element 0;
    vector<int> v(5, 9); // intial size=5 , each element 9;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v[0] << " " << v[4];
}