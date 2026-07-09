#include <bits/stdc++.h>
using namespace std;

int brute(string s)
{
    int cnt=0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            int hash[3] = {0}; 
            for(int k=i; k<=j; k++){
                hash[s[k]-'a'] = 1;
            }
            if(hash[0] == 1 && hash[1] == 1 && hash[2] == 1){
                cnt++;
            }
        }
    }
    return cnt;
}

int optimal(string s) {
    int hash[3] = {-1, -1, -1};
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a'] = i;
        if(hash[0] != -1 && hash[1] != -1 && hash[2] != -1){
            cnt = cnt + (1 + min({hash[0], hash[1], hash[2]}));
        }
    }
    return cnt;
}

int main()
{
    string s = "bbacba";
    cout << "Brute: " << brute(s) << endl;
    cout << "Optimal: " << optimal(s) << endl;
    return 0;
}
