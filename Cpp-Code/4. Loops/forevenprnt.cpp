#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "number ";
    cin >> n;

// loop work n times but print when if condition met

    // for (int i = 2; i <= n; i++) {  
    //     if (i % 2 == 0){
    //     cout << i << " ";
    //     }

    for (int i = 2; i <= n; i+=2){
          
        cout << i <<" ";
        }
    
    }
    
    
// i+=2 = i=i+2 