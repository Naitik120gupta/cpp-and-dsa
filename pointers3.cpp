#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int c=*x;
    *x=*y;
    *y=c;

}
int main(){
    int x=310;
    int y=210;
    int *ptrx=&x;
    int *ptry=&y;

    swap(ptrx,ptry);

    cout<<"x= "<<x<<" y="<<y;
}