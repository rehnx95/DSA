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
void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *inserthead(node *head, int el)
{
    node *temp = new node(el, head); // create a new node temp that point to head
    return temp;                     // temp is now head
}

node *inserttail(node *head, int el)
{
    if (head == NULL) // either no element or only one one element
        return new node(el);
    node *temp = head;
    while (temp->next != NULL) // last element is not point to null so keep moving
    {                          // last element point to null means we have to add next element that is tail
        temp = temp->next;
    }
    node *newnode = new node(el); // add tail that point to null
    temp->next = newnode;         // temp connect temp to new node
    return head;
}

node *insertelx(node *head, int el, int x) // insert el before x
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->data == x) // add node to first position
    {
        node *temp = new node(el, head);
        return temp;
    }
    node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->next->data == x)
        {
            node *newnode = new node(el);
            newnode->next = temp->next; // first connect newnode to next el
            temp->next = newnode;       // temp connect to new newnode
            break;
        }
        temp = temp->next;
    }
    return head;
}

node *insertel(node *head, int el, int k)
{
    if (head == nullptr)
    {
        if (k == 1)
        {
            return new node(el);
        }
        else
        {
            return head;
        }
    }
    if (k == 1) // add node to first position
    {
        node *temp = new node(el, head);
        return temp;
    }
    node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k - 1)
        {
            node *newnode = new node(el);
            newnode->next = temp->next; // first connect newnode to next el
            temp->next = newnode;       // temp connect to new newnode
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {2, 3, 5, 7, 6, 8};
    node *head = convert(arr); // gives the head of ll

    // head = inserthead(head,12);
    // head = inserttail(head,15);
    // head = insertel(head, 15, 7);
    // head = insertelx(head, 7, 5);

    print(head);
}