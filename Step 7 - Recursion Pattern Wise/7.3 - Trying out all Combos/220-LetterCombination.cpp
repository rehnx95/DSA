#include <bits/stdc++.h>
using namespace std;

string keypad(int digit)
{
    const vector<string> list = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    return list[digit];
}

void combination(int idx, string &current, string &digit, vector<string> &ans)
{

    if (current.size() == digit.size())
    {
        ans.push_back(current);
        return;
    }

    // Convert the current digit character to an integer index
    int d = digit[idx] - '0';

    // Fetch the string of letters mapped to this digit
    string letter = keypad(d);

    // Iterate through each available letter for the current digit
    for (int i = 0; i < letter.length(); i++)
    {
        char c = letter[i];

        current.push_back(c);                      // Step 1: Choose the letter
        combination(idx + 1, current, digit, ans); // Step 2: Recurse for the next digit
        current.pop_back();                        // Step 3: Backtrack (remove the choice)
    }
}

int main()
{

    string digit = "23";

    // Edge Case: Handle empty input string immediately
    if (digit.empty())
    {
        cout << "[]" << endl;
        return 0;
    }

    string current = "";
    vector<string> ans;

    combination(0, current, digit, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
