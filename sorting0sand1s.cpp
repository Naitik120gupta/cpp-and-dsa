#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int > v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    int zero=0;
    int ones=0;


    // sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            zero++;
        }
        else{
            ones++;
        }
        cout<<v[i]<<" ";
    }cout<<endl;

    for(int i=0;i<v.size();i++){
        if(i<zero){
            v[i]=(0);
        }
        else{
            v[i]=(1);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }



    return 0;
}