#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="(){[]}";
    stack<char> st;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                cout<<"Not Balanced";
                return 0;
            }
            char c=st.top();
            st.pop();
            if((s[i]==')' && c!='(') || (s[i]==']' && c!='[') || (s[i]=='}' && c!='{')) {
                cout<<"Not Balanced";
                return 0;
            }
        }
    }
    if(st.empty()) {
        cout<<"Balanced";
    }
    else {
        cout<<"Not Balanced";
    }
    return 0;
}