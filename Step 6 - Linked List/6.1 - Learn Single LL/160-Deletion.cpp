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

node *deletehead(node *head)
{
    if (head == NULL)
        return head;
    node *temp = head;
    head = head->next;
    free(temp);
    // delete temp;
    return head;
}

node *deletetail(node *head)
{
    if (head == NULL || head->next == NULL) // either no element or only one one element
        return NULL;
    node *temp = head;
    while (temp->next->next != NULL) // second last element is not point to null so keep moving
    {                                // once second last element point to null means we have to delete next element that is tail
        temp = temp->next;
    }
    free(temp->next); // remove the last element tail
    temp->next = nullptr;
    return head;
}

node *deletek(node *head, int k)
{
    node *temp = head;
    if (head == NULL)
        return head;
    if (k == 1)
    {
        head = head->next;
        free(temp);
        return head;
    }

    // prev point to null and cnt is zero cause there is no element
    int cnt = 0;
    node *prev = NULL;

    while (temp != NULL) // basic traversal with temp
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        else
        {
            prev = temp; // before moving temp store temp in prev
            temp = temp->next;
        }
    }
    return head;
}

node *deleteel(node *head, int el)
{
    node *temp = head;
    if (head == NULL)
        return head;
    if (head->data == el)
    {
        head = head->next;
        free(temp);
        return head;
    }

    // prev point to null

    node *prev = NULL;

    while (temp != NULL) // basic traversal with temp
    {
        if (temp->data == el)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        else
        {
            prev = temp; // before moving temp store temp in prev
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    vector<int> arr = {2, 3, 5, 7, 6, 8};
    node *head = convert(arr); // gives the head of ll

    // head = deletehead(head);
    // head = deletetail(head);
    // head = deletek(head, 4);
    // head = deleteel(head, 7);

    print(head);
}