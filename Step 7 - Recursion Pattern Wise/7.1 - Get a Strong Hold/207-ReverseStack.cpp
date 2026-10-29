#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(std::stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtBottom(st, element); // again and again calling until stack is empty
    st.push(topElement);         // then add element one by one after returning
}

void reverseStack(std::stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int topElement = st.top();
    st.pop();

    reverseStack(st);
    insertAtBottom(st, topElement);
}

int main()
{
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    while (!st.empty())
    {
        std::cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
