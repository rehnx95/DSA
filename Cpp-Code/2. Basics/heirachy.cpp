#include<iostream>
using namespace std;

int main(){
    int x=5,y,z;

    y=x=10; // = operate right to left 

    z=x<10; // <,> etc high precedence
            // x=10
            // 10<10 false = 0
            // z = 0

    cout<<x<<endl;
    cout<<y<<"\n"<<z<<endl;        




    return 0;
}