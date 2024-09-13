#include<iostream>
using namespace std;
int main(){
    int array[]={2,4,9,6,3,7,1,5};
    int c= sizeof(array)/sizeof(array[0]);
    cout<<"The size of the array is: "<<c<<endl;
    return 0;
}