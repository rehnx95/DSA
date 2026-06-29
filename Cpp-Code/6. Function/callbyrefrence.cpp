#include<iostream>
using namespace std;


// this will not work:::

// void swap (int a, int b){         temp  a  b
// int temp=a;                       2     2  4
//  a=b;                             2     4  4
//  b=temp;                          2     4  2
// }


void swappointer (int* a, int* b){    // temp  a  b
int temp=*a;                        //    2    2  4
 *a=*b;                           //      2    4  4
 *b=temp;                     //          2    4  2
}

int main(){
    int x=2,y=4;
cout<<"x is "<<x<< " y is "<<y<<endl;

// swap(x,y); this will not work::: 

swappointer(&x,&y);
cout<<"x is "<<x<< " y is "<<y<<endl;  

    return 0;
}