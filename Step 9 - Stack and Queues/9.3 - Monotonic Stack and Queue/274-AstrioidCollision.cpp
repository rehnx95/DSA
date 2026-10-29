#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 7, 1, 1, 2, -3, -7, 17, 15, -18, -19};
    stack<int> st;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            st.push(arr[i]);
        }
        else
        {
            // collision happen cause it of posi and neg
            while (!st.empty() && st.top() < (-arr[i]) && st.top() > 0)
            {
                st.pop();
            }
            if (!st.empty() && st.top() == (-arr[i]))
            {
                st.pop();
            }
            else if (st.empty() || st.top() < 0)
            {
                st.push(arr[i]);
            }
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
