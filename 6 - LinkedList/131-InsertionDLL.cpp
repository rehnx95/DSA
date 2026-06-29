#include <bits/stdc++.h>
using namespace std;

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

node *inserthead(node *head, int val)
{
    node *newhead = new node(val, head, nullptr);
    head->back = newhead;
    return newhead;
}

node *inserttail(node *head, int val)
{
    if (head == nullptr)
        return new node(val);

    // only one element, add after head
    if (head->next == nullptr)
    {
        node *newnode = new node(val, nullptr, head);
        head->next = newnode;
        return head;
    }

    node *temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    node *newnode = new node(val, nullptr, temp);
    temp->next = newnode;
    return head;
}

node *insertk(node *head, int k, int val)
{
    if (k == 1)
        return inserthead(head, val);

    node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }

    // k is out of bounds
    if (temp == nullptr)
        return head;

    node *prev = temp->back;
    node *newnode = new node(val, temp, prev);
    prev->next = newnode;
    temp->back = newnode;
    return head;
}

// returns head in case insertion happens before head
node *insertnode(node *head, node *temp, int val)
{
    // inserting before head
    if (temp->back == nullptr)
        return inserthead(head, val);

    node *prev = temp->back;
    node *newnode = new node(val, temp, prev);
    prev->next = newnode;
    temp->back = newnode;
    return head;
}

int main()
{
    vector<int> arr = {2, 3, 5, 4, 5, 7, 1, 9};
    node *head = convert(arr);

    // head = inserthead(head, 10);
    // head = inserttail(head, 6);
    // head = insertk(head, 8, 20);
    // head = insertnode(head, head->next->next, 12);

    traversal(head);
}