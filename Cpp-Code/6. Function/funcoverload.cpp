#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

double area(int r){
    return 3.14*r*r;
}

float area(int r, int h){
    return 3.14*r*r*h;
}

int volume(int l, int b, int h){
    return l*b*h;
}

int main(){
    cout<<area(3)<<endl;
    cout<<area(3,2)<<endl;
    cout<<volume(3,5,2)<<endl;
    cout<<sum(3,2)<<endl;
    cout<<sum(3,2,3)<<endl;
    
    return 0;
}