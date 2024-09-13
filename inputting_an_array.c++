#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the length of an array: ";
    cin>>len;
    char vowels[len];
    // for(int i=0;i<len;i++){
    //     cin>>vowels[i];
    // }
    for(char &element:vowels){
        cin>>element;
    }
    for(int i=0;i<len;i++){ 
        cout<<vowels[i]<<" ";
    }
    
}