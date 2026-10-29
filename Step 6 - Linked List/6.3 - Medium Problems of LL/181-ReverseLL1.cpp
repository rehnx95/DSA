#include <bits/stdc++.h>
using namespace std;

// basic for create a linked list
struct node
{
    int data;
    node *next;

    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
};

// convert array to linked list
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

// traverse in linked list always same no change in head
void traversal(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *reversebrute(node *head)
{
    node *temp = head;
    vector<int> v;
    while (temp)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    temp = head;
    int i = 0;
    int n = v.size() - 1;
    while (temp)
    {
        temp->data = v[n - i];
        i++;
        temp = temp->next;
    }
    return head;
}

node *reverseoptimal(node *head)
{
    node *prev = nullptr;
    node *temp = head;
    while (temp)
    {
        node *front = temp->next; // preserve temp next so that to traverse cause it break the connection
        temp->next = prev;        // temp next connect to prev one
        prev = temp;              // preserve prev in temp before moving temp
        temp = front;             // now temp is at front as we store it
    }
    return prev;
}
int main()
{
    vector<int> arr = {2, 3, 5};
    node *head = convert(arr); // gives the head of ll
    head = reverseoptimal(head);

    traversal(head);
}