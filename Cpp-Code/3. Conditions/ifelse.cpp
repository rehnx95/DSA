#include <iostream>
using namespace std;
int main()
{

    int age;
    cout << "Your Age ";
    cin >> age;

    if (age < 18 && age > 2)
    {
        cout << "You Can Not Come";
    }
    else if (age == 18)
    {
        cout << "Show Your ID";
    }

    else if (age < 2)
    {
        cout << "You Are Not Born Yet";
    }

    else if (age > 18)
    {
        cout << "You Can Come";
    }
}


// #include<iostream>
// using namespace std;

// int main(){
//       int n;
//     cout<<"marks ";
//     cin>>n;

//     if(n>=81 and n<=100){
//         cout<<"best";
//     }
//      else if(n>=61){
//         cout<<"good";  // it stop here if n is less than 60 
//     }
//      else if(n>=40){
//         cout<<"average";
//     }
//       else {
//         cout<<"fail";
//     }
//     return 0;
// }