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
    if (arr.empty())
        return nullptr;
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

node *deleteoccu(node *head, int k)
{
    if (head == nullptr)
        return nullptr;

    node *t = head;
    while (t)
    {
        if (t->data == k)
        {
            node *deletenode = t;
            if (t == head)
            {
                head = head->next;
                if (head != nullptr)  // always check node is at null or not before linking back pointer
                {
                    head->back = nullptr;
                }
                t = head;
            }
            else
            {
                node *prevNode = t->back;
                node *frontNode = t->next;

                prevNode->next = frontNode;
                if (frontNode != nullptr) // always check node is at null or not before linking back pointer
                {
                    frontNode->back = prevNode;
                }
                t = frontNode;
            }
            delete deletenode;
        }
        else
        {
            t = t->next;
        }
    }
    return head;
}

int main()
{
    vector<int> arr = {3, 3, 5, 3};
    node *head = convert(arr);
    head = deleteoccu(head, 3);
    traversal(head);
    return 0;
}
