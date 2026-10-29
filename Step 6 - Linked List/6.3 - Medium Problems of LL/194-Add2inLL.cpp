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
node *sum(node *head1, node *head2)
{
    node *dummy = new node(-1);
    node *current = dummy;

    node *temp1 = head1;
    node *temp2 = head2;
    int carry = 0;
    while (temp1 != nullptr || temp2 != nullptr)
    {
        int total = carry;
        if (temp1)
            total = total + temp1->data;
        if (temp2)
            total = total + temp2->data;

        node *newnode = new node(total % 10);
        carry = total / 10;
        current->next = newnode;
        current = current->next;
        if (temp1)
            temp1 = temp1->next;
        if (temp2)
            temp2 = temp2->next;
    }
    if (carry)
    {
        node *newnode = new node(carry);
        current->next = newnode;
    }
    return dummy->next;
}
int main()
{
    vector<int> arr1 = {2, 3, 5};
    vector<int> arr2 = {2, 3, 5, 9, 8};

    node *head1 = convert(arr1);
    node *head2 = convert(arr2);
    node *sumhead = sum(head1, head2);
    traversal(sumhead);
}
