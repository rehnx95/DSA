#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int maxDepth(string s) {
    int n = s.size();
    int depth = 0;
    int mx = 0;
    
    // Loop through each character of the string
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            depth++;            // Open bracket increases current depth
            mx = max(mx, depth); // Track the maximum depth seen so far
        } else if (s[i] == ')') {
            depth--;            // Close bracket decreases current depth
        }
    }
    return mx;
}

int main() {
    // Test case: Nesting depth of this string is 3
    string s = "(1+(2*3)+((8)/4))+1";
    
    int result = maxDepth(s);
    
    cout << "String: " << s << endl;
    cout << "Maximum nesting depth: " << result << endl;
    
    return 0;
}
