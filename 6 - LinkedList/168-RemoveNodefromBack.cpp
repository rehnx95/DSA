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

node *removebrute(node *head, int n)
{
    node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }

    if (cnt == n)
    {
        node *newhead = head->next;
        delete head;
        return newhead;
    }
    int rem = cnt - n;
    temp = head;
    while (temp)
    {
        rem--;
        if (rem == 0)
        {
            break;
        }
        temp = temp->next;
    }
    node *deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
    return head;
}

node *removeoptimal(node *head, int n)
{

    node *fast = head;
    for (int i = 1; i <= n; i++)
    {
        fast = fast->next;
    }
    if (fast == nullptr)
    {
        node *newhead = head->next;
        delete head;
        return newhead;
    }
    node *slow = head;
    while (fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }
    node *deletenode = slow->next;
    slow->next = slow->next->next;
    delete deletenode;
    return head;
}
int main()
{
    vector<int> arr = {2, 3, 5, 4, 3, 5};
    node *head = convert(arr); // gives the head of ll
    // head = removebrute(head, 5);
    head = removeoptimal(head, 4);
    traversal(head);
}