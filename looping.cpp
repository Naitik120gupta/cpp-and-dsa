#include<iostream>
using namespace std;

int main(){
    int n,sum;
    sum=0;
    cin>>n;
    while (n>0){
        sum=sum+n;
        n--;
    }
    cout<<sum<<endl;

    return 0;
}