#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=200;
    int sum;
    int *ptrx=&x;
    int *ptry=&y;
    int *ptrs=&sum;
    *ptrs=*ptrx+*ptry;
    cout<<*ptrs<<endl;
}