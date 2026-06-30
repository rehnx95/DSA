#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct StackLL {
    Node* head = NULL;
    int currSize = 0;
};

void push(StackLL &s, int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = s.head;
    s.head = temp;
    s.currSize++;
}

void pop(StackLL &s) {
    if (s.head == NULL) return;
    Node* temp = s.head;
    s.head = s.head->next;
    delete temp;
    s.currSize--;
}

int top(StackLL &s) {
    if (s.head == NULL) return -1;
    return s.head->data;
}

int size(StackLL &s) {
    return s.currSize;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    StackLL s1;
    StackLL s2;

    cout << top(s1) << " " << size(s1) << "\n";

    push(s1, 40);
    push(s1, 50);
    cout << top(s1) << " " << size(s1) << "\n";

    pop(s1);
    cout << top(s1) << " " << size(s1) << "\n";

    push(s2, 900);
    cout << top(s2) << " " << size(s2) << "\n";

    pop(s1);
    cout << top(s1) << " " << size(s1) << "\n";

    return 0;
}
