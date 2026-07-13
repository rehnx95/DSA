#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct compare
{
    bool operator()(const ListNode *a, const ListNode *b)
    {
        return a->val > b->val;
    }
};

int main()
{
    ListNode *l1 = new ListNode(1, new ListNode(4, new ListNode(5)));
    ListNode *l2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode *l3 = new ListNode(2, new ListNode(6));

    vector<ListNode *> lists = {l1, l2, l3};

    priority_queue<ListNode *, vector<ListNode *>, compare> minHeap;

    for (ListNode *head : lists)
    {
        if (head != nullptr)
        {
            minHeap.push(head);
        }
    }
    ListNode dummy(0);
    ListNode *tail = &dummy;
    while (!minHeap.empty())
    {
        ListNode *smallest = minHeap.top();
        minHeap.pop();

        tail->next = smallest;
        tail = tail->next;

        if (smallest->next != nullptr)
        {
            minHeap.push(smallest->next);
        }
    }

    ListNode *resulthead = dummy.next;

    ListNode *temp = resulthead;
    while (temp != nullptr)
    {
        cout << temp->val;
        if (temp->next != nullptr)
            cout << " -> ";
        temp = temp->next;
    }t
    cout << endl;

    while (resulthead != nullptr)
    {
        ListNode *nextNode = resulthead->next;
        delete resulthead;
        resulthead = nextNode;
    }

    return 0;
}
