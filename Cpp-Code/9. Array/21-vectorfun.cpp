#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
// void change(vector<int> v)
// // vector<int> v = v
// // vector are pass by value
// {
//     v[1] = 9;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

void change(vector<int> &v)
// vector<int> v = v
// vector are pass by refence
{
    v[1] = 9;
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    display(v);
    change(v);
    display(v);
}