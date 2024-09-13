#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=0;
    int sum=0;
    while (n>0){
        r=n%10;
        n=n/10;
        sum = sum * 10 + r;
    }
    cout<<sum<<endl;
    if(sum==n){
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not Pallindrome"<<endl;
    }
}