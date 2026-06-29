#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,2,1};
    int i = 0;
    int j = 4;
    bool flag = true;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = false;
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    if(flag==true){
        cout<<"palindrom";
    } else{
        cout<<"not palindrom";
    }
}