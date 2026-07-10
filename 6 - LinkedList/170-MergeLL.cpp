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

node *mergebrute(node *h1, node *h2)
{
    if (h1 == nullptr)
        return h2;
    if (h2 == nullptr)
        return h1;

    vector<int> v;
    node *t = h1;
    while (t)
    {
        v.push_back(t->data);
        t = t->next;
    }
    t = h2;
    while (t)
    {
        v.push_back(t->data);
        t = t->next;
    }
    sort(v.begin(), v.end());

    //  node *head = convert(v); another method but it take extra space (brute method)

    t = h1;
    int i = 0;
    while (t->next != nullptr)
    {
        t->data = v[i];
        i++;
        t = t->next;
    }
    t->data = v[i++]; // as i is initially at 0 so it sync with temp
    t->next = h2;
    t = h2;
    while (t)
    {
        t->data = v[i];
        i++;
        t = t->next;
    }

    return h1;
}

node *mergeoptimal(node *h1, node *h2)
{
    if (!h1)
        return h2;
    if (!h2)
        return h1;
    node *t1 = h1;
    node *t2 = h2;
    node *dummy = new node(-1);
    node *t = dummy;
    while (t1 && t2)
    {
        if (t1->data <= t2->data)
        {
            t->next = t1;
            t = t1;
            t1 = t1->next;
        }
        else
        {
            t->next = t2;
            t = t2;
            t2 = t2->next;
        }
    }
    if (t1)
    {
        t->next = t1;
    }
    else
    {
        t->next = t2;
    }

    return dummy->next;
}
int main()
{
    vector<int> arr1 = {2, 3, 5};
    vector<int> arr2 = {2, 3, 5, 8, 9};

    node *head1 = convert(arr1); // gives the head of ll
    node *head2 = convert(arr2);
    node *head = mergeoptimal(head1, head2);
    // node *head = mergebrute(head1, head2);

    traversal(head);
}