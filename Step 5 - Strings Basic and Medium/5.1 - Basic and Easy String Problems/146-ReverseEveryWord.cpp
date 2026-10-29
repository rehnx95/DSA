#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    int start = 0;
    
    for (int i = 0; i <= n; i++) {
        // If we hit a space or the end of the string, we found a word boundary
        if (i == n || s[i] == ' ') {
            // Reverse the current word in place
            reverse(s.begin() + start, s.begin() + i);
            // Move start pointer to the beginning of the next word
            start = i + 1;
        }
    }
    return s;
}

int main() {
    string s = "Let's take LeetCode contest";
    cout << reverseWords(s) << endl; // Output: s'teL ekat edoCteeL tsetnoc
    return 0;
}
