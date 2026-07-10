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

node *reverse(node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    node *last = nullptr;
    node *current = head;
    while (current != nullptr)
    {

        last = current->back;          // temp=a
        current->back = current->next; //  a=b
        current->next = last;          // b=temp
        current = current->back;
    }
    return last->back;
}
int main()
{
    vector<int> arr = {2, 3, 5};
    node *head = convert(arr); // gives the head of dll
    head = reverse(head);
    traversal(head);
}