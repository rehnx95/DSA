#include <iostream>
#include <string>

using namespace std;

bool rotateString(string s, string goal)
{
    // Check if lengths match; if they don't, goal cannot be a rotation
    if (s.length() != goal.length())
    {
        return false;
    }

    // Concatenate s with itself to cover all possible rotation variants
    string doubles = s + s;

    // Return true if goal is found anywhere inside the doubled string
    return doubles.find(goal) != string::npos;
}

int main()
{
    string s = "abcde";
    string goal = "cdeab";

    if (rotateString(s, goal))
    {
        cout << "True: '" << goal << "' is a rotated version of '" << s << "'" << endl;
    }
    else
    {
        cout << "False: '" << goal << "' is NOT a rotated version of '" << s << "'" << endl;
    }

    return 0;
}
