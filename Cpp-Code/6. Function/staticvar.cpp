#include<iostream>
using namespace std;

int sum(int a,int b){
    static int c=0;
    c=c-2;
    return a+b+c;


}

//dont use static ad inline together

int main(){
    int x,y;
    cout<<"x and y ";
    cin>>x>>y;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;
    cout<<"sum is "<<sum(x,y)<<endl;





    return 0;
}