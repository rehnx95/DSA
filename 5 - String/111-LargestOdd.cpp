#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int idx=-1;
        for(int i=n-1;i>=0;i--){
            if(num[i]%2==0){
               
            } else {
                idx=i;
                break;
            }
        }
        if(idx==-1) return "";
        else return num.substr(0,idx+1);
    }
};