#include <bits/stdc++.h> 
using namespace std; 

vector<int> getsieve(int n) { 
    vector<int> prime(n + 1, 1); 
    for (int i = 2; i * i <= n; i++) { 
        if (prime[i] == 1) { 
            for (int j = i * i; j <= n; j += i) { 
                prime[j] = 0; 
            } 
        } 
    } 
    return prime; 
} 

vector<int> count(vector<vector<int>> &q) { 
    vector<int> ans; 
    vector<int> prime = getsieve(1000000); 
    int cnt = 0; 
    for (int i = 2; i <= 1000000; i++) { 
        cnt = cnt + prime[i]; 
        prime[i] = cnt; 
    } 
    for (size_t i = 0; i < q.size(); i++) { 
        int l = q[i][0]; 
        int r = q[i][1]; 
        if (l == 0) {
            ans.push_back(prime[r]);
        } else {
            ans.push_back(prime[r] - prime[l - 1]); 
        }
    } 
    return ans; 
} 

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<vector<int>> q = {
        {1, 10},
        {5, 20},
        {10, 100},
        {0, 50}
    };
    
    vector<int> ans = count(q);
    for (int res : ans) {
        cout << res << "\n";
    }
    
    return 0;
}
