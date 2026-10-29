#include <bits/stdc++.h>
using namespace std;

struct StackQ {
    queue<int> q;
};

void push(StackQ &sq, int x) {
    int s = sq.q.size();
    sq.q.push(x);
    for (int i = 0; i < s; i++) {
        sq.q.push(sq.q.front());
        sq.q.pop();
    }
}

void pop(StackQ &sq) {
    if (sq.q.empty()) return;
    sq.q.pop();
}

int top(StackQ &sq) {
    if (sq.q.empty()) return -1;
    return sq.q.front();
}

int size(StackQ &sq) {
    return sq.q.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    StackQ s1;
    StackQ s2;

    cout << "Initial s1 top: " << top(s1) << " | size: " << size(s1) << "\n";

    push(s1, 10);
    push(s1, 20);
    push(s1, 30);
    cout << "s1 top after pushes: " << top(s1) << " | size: " << size(s1) << "\n";

    pop(s1);
    cout << "s1 top after 1 pop: " << top(s1) << " | size: " << size(s1) << "\n";

    push(s2, 500);
    cout << "s2 top: " << top(s2) << " | s1 top: " << top(s1) << "\n";

    pop(s1);
    pop(s1);
    pop(s1);
    cout << "s1 top after empty pop: " << top(s1) << " | size: " << size(s1) << "\n";

    return 0;
}
