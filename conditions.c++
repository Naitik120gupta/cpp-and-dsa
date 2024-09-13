#include <iostream>
using namespace std;
int main(){
    // int a;
    // cout<<"Enter number: ";
    // cin>>a;
    // if (a%2==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }
    int age;
    cin>>age;
    if (age<12){
        cout<<"child";
    }
    else if(age>12 and age<18){
        cout<<"Teenager";
    }
    else{
        cout<<"Adult";
    }

}