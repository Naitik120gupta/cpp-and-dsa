#include <iostream>
using namespace std;

void firstAndLastIndex(string s,char ch,int *first,int *last){
    for(int i=0;i<s.size();i++){
        if (s[i]==ch){
            *first=i;
            break;
        }
    }
    for(int i=s.size();i>=0;i--){
        if (s[i]==ch){
            *last=i;
            break;
        }
    }
}

int main(){

    string s="aaabc";
    char ch='a';
    int first=-1;
    int last=-1;
    int *pt1=&first;
    int *pt2=&last;

    firstAndLastIndex(s,ch,pt1,pt2);
    
    cout<<*pt1<<" "<<*pt2<<endl;

    return 0;
}