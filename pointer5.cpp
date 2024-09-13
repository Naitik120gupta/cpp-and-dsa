#include<iostream>
using namespace std;
int main(){
    int r=5;
    int *ptr=&r;
    double t=19.99;
    double *ptrt=&t;
    cout<<ptr<<"\n"<<(ptr+2)<<endl;
    cout<<ptrt<<"\n"<<(ptrt+1);
}