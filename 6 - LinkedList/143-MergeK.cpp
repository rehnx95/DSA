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

// ==================== BRUTE FORCE ====================
// Dump all values into array, sort, rebuild LL

node* mergeKLists1(vector<node*>& lists) {
    vector<int> arr;

    for(int i = 0; i < lists.size(); i++) {
        node* temp = lists[i];
        while(temp != nullptr) {
            arr.push_back(temp->data);
            temp = temp->next;
        }
    }

    sort(arr.begin(), arr.end());

    node* dummyNode = new node(-1);
    node* temp = dummyNode;
    for(int i = 0; i < arr.size(); i++) {
        temp->next = new node(arr[i]);
        temp = temp->next;
    }

    return dummyNode->next;
}


// ==================== BETTER ====================
// Merge two lists at a time, in-place relinking

node* mergeTwoLists(node* l1, node* l2) {
    node* dummy = new node(-1);
    node* temp = dummy;
    while(l1 != nullptr && l2 != nullptr) {
        if(l1->data <= l2->data) {
            temp->next = l1;
            l1 = l1->next;
        } else {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }
    if(l1) temp->next = l1;
    if(l2) temp->next = l2;
    return dummy->next;
}

node* mergeKLists2(vector<node*>& lists) {
    node* head = lists[0];
    for(int i = 1; i < lists.size(); i++) {
        head = mergeTwoLists(head, lists[i]);
    }
    return head;
}


// ==================== OPTIMAL ====================
// Min heap, always pick smallest front node across all K lists

node* mergeKLists3(vector<node*>& lists) {
    priority_queue<pair<int, node*>,
                   vector<pair<int, node*>>,
                   greater<pair<int, node*>>> pq;

    for(int i = 0; i < lists.size(); i++) {
        if(lists[i] != nullptr) {
            pq.push({lists[i]->data, lists[i]});
        }
    }

    node* dummyNode = new node(-1);
    node* temp = dummyNode;

    while(!pq.empty()) {
        auto it = pq.top();
        pq.pop();

        if(it.second->next != nullptr)
            pq.push({it.second->next->data, it.second->next});

        temp->next = it.second;
        temp = temp->next;
    }

    return dummyNode->next;
}
int main()
{
    vector<int> arr1 = {1, 4, 6, 8};
    vector<int> arr2 = {2, 5, 7};
    vector<int> arr3 = {1, 9};

    node* head1 = convert(arr1);
    node* head2 = convert(arr2);
    node* head3 = convert(arr3);

    vector<node*> lists = {head1, head2, head3};

    node* mergedHead = mergeKLists3(lists);
    traversal(mergedHead);
}