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

node *sortbrute(node *head)
{
    vector<int> v;
    node *temp = head;
    while (temp)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    sort(v.begin(), v.end());
    temp = head;
    int i = 0;
    while (temp)
    {
        temp->data = v[i];
        i++;
        temp = temp->next;
    }
    return head;
}

node *findmiddle(node *head)
{
    node *slow = head;
    node *fast = head->next; // for even length of ll
    while (fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node *mergell(node *left, node *right)
{
    node *dummy = new node(-1);
    node *temp = dummy;
    while (left != nullptr && right != nullptr)
    {
        if (left->data <= right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    if (left)
        temp->next = left;
    else
        temp->next = right;
    node *sortedHead = dummy->next;
    delete dummy;
    return sortedHead;
}
node *dividell(node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    node *middle = findmiddle(head);

    node *righthead = middle->next;
    middle->next = nullptr;
    node *lefthead = head;
    lefthead = dividell(lefthead);
    righthead = dividell(righthead);
    return mergell(lefthead, righthead);
}
int main()
{
    vector<int> arr = {2, 2, 3, 9, 8, 7};
    node *head = convert(arr); // gives the head of ll
    head = dividell(head);
    traversal(head);
}