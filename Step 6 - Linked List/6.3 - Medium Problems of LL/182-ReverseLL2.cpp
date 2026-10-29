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
    if (head == nullptr || head->next == nullptr)
        return head;

    node *newhead = reverse(head->next);
    node *front = head->next;
    front->next = head;
    head->next = nullptr;
    return newhead;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    node *head = convert(arr); // gives the head of ll
    head = reverse(head);
    traversal(head);
}