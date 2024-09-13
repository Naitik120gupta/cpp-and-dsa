#include<iostream>
using namespace std;
int main(){
    while (true){
    
        int n,factorial=1;
        cin>>n;

        for(int i=1;i<=n;i++){
            factorial*=i;
        }
        cout<<factorial;
    }
}