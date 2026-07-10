#include <bits/stdc++.h>
using namespace std;
struct node
{
public:
    int data;
    node *next;

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
node *convert(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
bool search(node *head, int target)
{
    node *temp = head;
    while (temp)
    {
        if (temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    vector<int> arr = {2, 3, 5};
    node *head = convert(arr);
    cout << search(head, 5) << endl;
    ;
}