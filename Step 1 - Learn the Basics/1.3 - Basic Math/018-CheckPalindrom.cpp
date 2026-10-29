#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + (x % 10);
        x /= 10;
    }

    return x == reversedHalf || x == reversedHalf / 10;
}

int main() {
    int num = 121;
    if (isPalindrome(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
