#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct QueueLL {
    Node* frontNode = NULL;
    Node* rearNode = NULL;
    int currSize = 0;
};

void push(QueueLL &q, int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if (q.rearNode == NULL) {
        q.frontNode = q.rearNode = temp;
        q.currSize++;
        return;
    }
    q.rearNode->next = temp;
    q.rearNode = temp;
    q.currSize++;
}

void pop(QueueLL &q) {
    if (q.frontNode == NULL) return;
    Node* temp = q.frontNode;
    q.frontNode = q.frontNode->next;
    if (q.frontNode == NULL) {
        q.rearNode = NULL;
    }
    delete temp;
    q.currSize--;
}

int top(QueueLL &q) {
    if (q.frontNode == NULL) return -1;
    return q.frontNode->data;
}

int size(QueueLL &q) {
    return q.currSize;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    QueueLL q1;
    QueueLL q2;

    cout << top(q1) << " " << size(q1) << "\n";

    push(q1, 60);
    push(q1, 70);
    push(q1, 80);
    cout << top(q1) << " " << size(q1) << "\n";

    pop(q1);
    cout << top(q1) << " " << size(q1) << "\n";

    push(q2, 600);
    cout << top(q2) << " " << size(q2) << "\n";

    pop(q1);
    pop(q1);
    cout << top(q1) << " " << size(q1) << "\n";

    return 0;
}
