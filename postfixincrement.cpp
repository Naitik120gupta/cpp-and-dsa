#include<iostream>
using namespace std;
int main(){
    int arr[3]={2,5,7};
    int *ptr=&arr[1];
    // cout<<*ptr++<<endl;
    // cout<<(*ptr)++<<endl;
    cout<<*++ptr<<endl;
    cout<<++*ptr<<endl;
    cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<endl;

}