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

node *deletehead(node *head)
{
    if (head == NULL)
        return head;
    node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

node *deletetail(node *head)
{
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

node *deletek(node *head, int k)
{
    node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        temp = temp->next;
    }
    node *prev = temp->back;
    node *front = temp->next;
    if (prev == nullptr && front == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return deletehead(head);
    }
    else if (front == nullptr)
    {
        return deletetail(head);
    }
    else
    {
        prev->next = front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return head;
    }
}

void deletenode(node *temp)
{
    node *prev = temp->back;
    node *front = temp->next;
    if (front == nullptr)
    {
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
    }
    prev->next = front;
    front->back = prev;
    temp->next = temp->back = nullptr;
    delete temp;
}
int main()
{
    vector<int> arr = {2, 3, 5, 4, 5, 7, 1, 9};
    node *head = convert(arr); // gives the head of dll
    // head = deletehead(head);
    // head = deletetail(head);
    // head = deletek(head, 5);
    // deletenode(head->next->next);

    traversal(head);
}