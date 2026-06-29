#include <iostream>
#include <vector>
using namespace std;

void sort01(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {

        if (v[i] < 0)
            i++;
        else if (v[j] > 0)
            j--;
       
        else  
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}
void display(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int digit;
    cout << "number of digit ";
    cin >> digit;
    vector<int> v;

    cout << "enter digits ";
    for (int i = 0; i < digit; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort01(v);
    display(v);
}
