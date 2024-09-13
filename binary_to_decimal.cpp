#include<iostream>
using namespace std;
int main(){
    int n,decimal=0,i=1;
    cin>>n;
    while(n>0){
        int r=n%10;
        decimal=decimal+(r*i);
        i*=2;
        n=n/10;
    }
    cout<<decimal;
    return 0;
}