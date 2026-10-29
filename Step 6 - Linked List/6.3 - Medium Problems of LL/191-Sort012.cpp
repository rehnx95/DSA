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

node *sort(node *head)
{
    node *dummyzero = new node(-1);
    node *zero = dummyzero;
    node *dummyone = new node(-1);
    node *one = dummyone;
    node *dummytwo = new node(-1);
    node *two = dummytwo;

    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == 0)
        {
            zero->next = temp;
            zero = zero->next;
        }
        else if (temp->data == 1)
        {
            one->next = temp;
            one = one->next;
        }
        else
        {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    zero->next = (dummyone->next) ? (dummyone->next) : (dummytwo->next);
    one->next = dummytwo->next;
    two->next = nullptr;
    return dummyzero->next;
    delete dummyone;
    delete dummytwo;
    delete dummyzero;
}
int main()
{
    vector<int> arr = {0, 0, 0, 1};
    node *head = convert(arr); // gives the head of ll
    head = sort(head);
    traversal(head);
}