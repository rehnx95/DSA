#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1000;

struct MyQueue {
    int arr[MAX_SIZE];
    int start_idx = 0;
    int end_idx = 0;
    int currSize = 0;
};

void push(MyQueue &q, int x) {
    if (q.currSize == MAX_SIZE) return;
    q.arr[q.end_idx] = x;
    q.end_idx = (q.end_idx + 1) % MAX_SIZE;
    q.currSize++;
}

void pop(MyQueue &q) {
    if (q.currSize == 0) return;
    q.start_idx = (q.start_idx + 1) % MAX_SIZE;
    q.currSize--;
}

int top(MyQueue &q) {
    if (q.currSize == 0) return -1;
    return q.arr[q.start_idx];
}

int size(MyQueue &q) {
    return q.currSize;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    MyQueue q1;
    MyQueue q2;

    cout << top(q1) << " " << size(q1) << "\n";

    push(q1, 5);
    push(q1, 15);
    push(q1, 25);
    cout << top(q1) << " " << size(q1) << "\n";

    pop(q1);
    cout << top(q1) << " " << size(q1) << "\n";

    push(q2, 50);
    push(q2, 60);
    cout << top(q2) << " " << size(q2) << "\n";

    pop(q1);
    pop(q1);
    pop(q1);
    cout << top(q1) << " " << size(q1) << "\n";

    return 0;
}
