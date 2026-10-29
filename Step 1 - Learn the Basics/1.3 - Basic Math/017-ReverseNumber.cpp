#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int lastDigit = n % 10;
        
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && lastDigit > 7)) return 0;
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && lastDigit < -8)) return 0;
        
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num = -1234;
    cout << reverseNumber(num) << endl;
    return 0;
}
