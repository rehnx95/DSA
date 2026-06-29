#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
       string str = "rehan is in ggv in college in ";
    vector<string> v;
    stringstream ss(str);
    string temp;
    while (ss >> temp)
    {
        // cout<<temp<<endl;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

}