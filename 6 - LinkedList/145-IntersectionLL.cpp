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

node *pointbrute(node *head1, node *head2)
{
    map<node *, int> mpp;
    node *t1 = head1;
    while (t1)
    {
        mpp[t1]++;
        t1 = t1->next;
    }
    node *t2 = head2;
    while (t2)
    {
        if (mpp.find(t2) != mpp.end())
        {
            return t2;
        }
        t2 = t2->next;
    }
    return nullptr;
}

node *pointoptimal1(node *headA, node *headB)
{
    if (headA == nullptr || headB == nullptr)
    {
        return nullptr;
    }

    node *t1 = headA;
    node *t2 = headB;

    while (t1 != t2)
    {
        t1 = (t1 == nullptr) ? headB : t1->next;
        t2 = (t2 == nullptr) ? headA : t2->next;
    }

    return t1;
}

int main()
{
    vector<int> arr = {2, 3, 5};
    node *head = convert(arr); // gives the head of ll
    // cout << head->data << endl;
    // cout << head->next << endl;
    traversal(head);
}