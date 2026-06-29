#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // dont need to mention size
    // inserting/input do not use []
    // v[2]=1;

    v.push_back(2);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(6);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(9);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(11);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    // update/access
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    cout << v[4] << " " << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();

    // update/access
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}