#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y=17.8;
    int *ptr=&x;
    float *ptr1=&y;

    // x=55;
    cout<<ptr<<"\n"<<ptr1<<endl;
    *ptr=500; //updating the content in the same address
    cout<<ptr<<endl;
    
    cout<<*ptr<<endl; //dereference operator
}