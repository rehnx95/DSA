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

node *startpointbrute(node *head)
{
    map<node *, int> mpp;
    node *temp = head;
    while (temp)
    {
        if (mpp.find(temp) != mpp.end())
        {
            return temp;
        }
        mpp[temp]++;
        temp = temp->next;
    }
    return nullptr;
}

node* startpointoptimal(node* head){
    node* fast=head;
    node* slow=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}
int main()
{
    vector<int> arr = {2, 3, 5};
    node *head = convert(arr); // gives the head of ll
    traversal(head);
}