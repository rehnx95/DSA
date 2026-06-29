#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cout << "number of digit ";
    cin >> n;
    int arr[n];

    cout << "enter digits ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
      

    int mx=INT_MIN;   
                  
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > mx)   
        {
            mx = arr[i]; 
        }
    }
    cout<<"max is "<<mx<<endl;

    int smx = INT_MIN;

     for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] != mx)   
        {
            smx = max(smx, arr[i]); 
        }
    }
    cout<<"second max is "<<smx<<endl;

}
