#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // dont need to mention size
    // inserting/input do not use []
    // v[2]=1;

    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    cout << "size " << v.size() << endl;
    cout << "capacity " << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "size " << v.size() << endl;
    cout << "capacity " << v.capacity() << endl;
}