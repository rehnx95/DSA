#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    if (n < 0) return false;

    int temp = n;
    int k = 0;
    
    while (temp > 0) {
        k++;
        temp /= 10;
    }
    
    temp = n;
    int sum = 0;
    while (temp > 0) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, k);
        temp /= 10;
    }
    
    return sum == n;
}

int main() {
    int num = 153;
    if (isArmstrong(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
