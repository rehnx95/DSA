#include <bits/stdc++.h>
using namespace std;

// basic for create a linked list
struct node
{
    int data;
    node *next;
    node *back;
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};

// convert array to linked list
node *convert(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
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

node *removedupl(node *head)
{
    node *t1 = head;
    node *t2 = head->next;
    while (t2)
    {
        if (t1->data == t2->data)
        {
            node *t = t2;
            t2 = t2->next;
            delete t;
        }
        else
        {
            t1->next = t2;
            t2->back = t1;
            t1 = t2;
            t2 = t2->next;
        }
    }
    t1->next = nullptr;
    return head;
}

int main()
{
    vector<int> arr = {2, 3, 3, 5, 5, 5, 5, 6, 6};

    node *head = convert(arr); // gives the head of dll
    head = removedupl(head);
    traversal(head);
}