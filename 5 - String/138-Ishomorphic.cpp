#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        
        vector<int> mapStoT(256, 0);
        vector<int> mapTtoS(256, 0);
        
        for(int i = 0; i < s.size(); i++){
            char s1 = s[i];
            char s2 = t[i];
            
            if(mapStoT[s1] == 0 && mapTtoS[s2] == 0){
                mapStoT[s1] = s2;
                mapTtoS[s2] = s1;
            } 
            else if(mapStoT[s1] != s2 || mapTtoS[s2] != s1) {
                return false; 
            }
        }
        return true;
    }
};
