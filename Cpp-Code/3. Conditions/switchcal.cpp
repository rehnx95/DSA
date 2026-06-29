#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    char a;

cout<<"------------------"<<endl;
cout<<"SIMPLE CALCULATOR"<<endl;
cout<<"------------------"<<endl;

cout<<"Number 1: ";
cin>>num1;
cout<<endl;

cout<<"Choose Operation (+,-,*,/): ";
cin>>a;
cout<<endl;

cout<<"Number 2: ";
cin>>num2;
cout<<endl;

switch(a){

case '+':
cout<<num1+num2;
break;

case '-':
cout<<num1-num2;
break;

case '*':
cout<<num1*num2;
break;

case '/':
cout<<num1/num2;
break;

default:
cout<<"INVALID";


}

cout<<endl<<"DONE CHUTIYE";



    
}