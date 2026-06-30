#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1000;

struct MyStack
{
    int arr[MAX_SIZE];
    int topIndex = -1;
};

void push(MyStack &s, int x)
{
    if (s.topIndex >= MAX_SIZE - 1)
        return;
    s.topIndex++;
    s.arr[s.topIndex] = x;
}

void pop(MyStack &s)
{
    if (s.topIndex == -1)
        return;
    s.topIndex--;
}

int top(MyStack &s)
{
    if (s.topIndex == -1)
        return -1;
    return s.arr[s.topIndex];
}

int size(MyStack &s)
{
    return s.topIndex + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    MyStack s1;
    MyStack s2;

    cout << top(s1) << " " << size(s1) << "\n";

    push(s1, 10);
    push(s1, 20);
    push(s1, 30);
    cout << top(s1) << " " << size(s1) << "\n";

    pop(s1);
    cout << top(s1) << " " << size(s1) << "\n";

    push(s2, 100);
    push(s2, 200);
    cout << top(s2) << " " << size(s2) << "\n";

    pop(s1);
    pop(s1);
    pop(s1);
    cout << top(s1) << " " << size(s1) << "\n";

    return 0;
}
