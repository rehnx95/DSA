#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abc";
    int n = s.length();

    // Method 1: Using the direct formula (Fastest & Simplest)
    int countWithFormula = (n * (n + 1)) / 2;

    // Method 2: Counting by actually generating them with loops
    int countWithLoops = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            countWithLoops++; // Increments for every valid substring found
        }
    }

    // Print Results
    cout << "String: " << s << endl;
    cout << "Count using Formula: " << countWithFormula << endl;
    cout << "Count using Loops:   " << countWithLoops << endl;

    return 0;
}
