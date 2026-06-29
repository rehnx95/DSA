#include<iostream>
using namespace std;

// int &
void swappointer (int &a, int &b){                 // temp  a  b
                //int &a = x ,&b = y
int temp=a;                                        // 2    2  4
 a=b;                                              // 2    4  4
 b=temp;                                           // 2    4  2
//return a;                                       
}

int main(){
    int x,y;
    cout<<"num1 ";
    cin>>x;
    cout<<"num2 ";
    cin>>y;
cout<<"x is "<<x<< " y is "<<y<<endl;

swappointer(x,y);  // = 466;  this will change value of x 

cout<<"x is "<<x<< " y is "<<y<<endl;  

    return 0;
}

