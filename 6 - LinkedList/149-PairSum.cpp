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

// brute
vector<pair<int, int>> pairsum1(node *head, int target)
{
    vector<pair<int, int>> ans;
    node *t1 = head;
    while (t1)
    {
        node *t2 = t1->next;
        while (t2 && t1->data + t2->data <= target)
        {
            if (t1->data + t2->data == target)
            {
                ans.push_back({t1->data, t2->data});
            }
            t2 = t2->next;
        }
        t1 = t1->next;
    }
    return ans;
}

// optimal(sorted)
vector<pair<int, int>> pairsum2(node *head, int target)
{
    vector<pair<int, int>> ans;
    if (!head)
        return ans;

    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    node *right = temp;
    node *left = head;

    while (left != right && right->next != left)
    {
        int sum = left->data + right->data;
        if (sum == target)
        {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->back;
        }
        else if (sum > target)
        {
            right = right->back;
        }
        else
        {
            left = left->next;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 4};
    node *head = convert(arr);

    int target = 5;
    vector<pair<int, int>> result = pairsum2(head, target);

    for (auto p : result)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
    return 0;
}
