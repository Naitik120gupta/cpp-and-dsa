#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int target;
    cout<<"Enter the target number: ";
    cin>>target;
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(v[i]+v[j]==target){
                cout<<i<<","<<j<<endl;
            }
        }
    }




    return 0;
}