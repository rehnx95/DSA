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

node *reverse(node *head)
{
    node *prev = nullptr;
    node *temp = head;
    while (temp)
    {
        node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

node *addone(node *head)
{

    node *newhead = reverse(head);
    int carry = 1;
    node *temp = newhead;
    while (temp)
    {
        int sum = carry + temp->data;
        temp->data = sum % 10;
        carry = sum / 10;
        if (carry == 0)
            break;
        temp = temp->next;
    }
    node *finalhead = reverse(newhead);

    if (carry)
    {
        node *newnode = new node(carry, finalhead);
        return newnode;
    }
    return finalhead;
}

// recursive method still pending
int main()
{
    vector<int> arr = {9, 9, 9};
    node *head = convert(arr); // gives the head of ll
    head = addone(head);
    traversal(head);
}