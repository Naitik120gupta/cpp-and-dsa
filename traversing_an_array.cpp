#include<iostream>
using namespace std;
int main(){

    int array[]={3,4,5,6};
    int size=sizeof(array)/sizeof(array[1]);
    
    for(int i=0;i<size;i++){  //for loop
        cout<<array[i]<<endl;
    }

    for(int ele:array){    //for each loop
        cout<<ele<<endl;
    }

    int index=0;
    while (index<size){   //while loop
        cout<<array[index]<<endl;
        index++;
    }

    return 0;
}