#include <bits/stdc++.h>
using namespace std;

struct QueueS {
    stack<int> input;
    stack<int> output;
};

void push(QueueS &qs, int x) {
    qs.input.push(x);
}

void pop(QueueS &qs) {
    if (qs.output.empty()) {
        while (!qs.input.empty()) {
            qs.output.push(qs.input.top());
            qs.input.pop();
        }
    }
    if (!qs.output.empty()) {
        qs.output.pop();
    }
}

int top(QueueS &qs) {
    if (qs.output.empty()) {
        while (!qs.input.empty()) {
            qs.output.push(qs.input.top());
            qs.input.pop();
        }
    }
    if (qs.output.empty()) return -1;
    return qs.output.top();
}

int size(QueueS &qs) {
    return qs.input.size() + qs.output.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    QueueS q1;
    QueueS q2;

    cout << "Initial q1 top: " << top(q1) << " | size: " << size(q1) << "\n";

    push(q1, 100);
    push(q1, 200);
    push(q1, 300);
    cout << "q1 top after pushes: " << top(q1) << " | size: " << size(q1) << "\n";

    pop(q1);
    cout << "q1 top after 1 pop: " << top(q1) << " | size: " << size(q1) << "\n";

    push(q2, 999);
    cout << "q2 top: " << top(q2) << " | q1 top: " << top(q1) << "\n";

    pop(q1);
    pop(q1);
    pop(q1);
    cout << "q1 top after empty pop: " << top(q1) << " | size: " << size(q1) << "\n";

    return 0;
}
