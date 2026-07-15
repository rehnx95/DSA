#include <bits/stdc++.h>
using namespace std;

// Euclidean Algorithm: O(log(min(a, b))) time complexity
int findGCD(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if (a == 0) return b;
    return a;
}

int main() {
    int num1 = 52, num2 = 10;
    cout << findGCD(num1, num2) << endl; // Output: 2
    return 0;
}
