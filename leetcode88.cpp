#include<iostream>
#include<vector>
using namespace std;

vector <int>merge(vector<int>& arr1, vector<int>& arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> res(n+m);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
            k++;
        }
        else{
            res[k]=arr2[j];
            j++;
            k++;
        }
        if(i==n){
            while(j<=m-1){
                res[k]=arr2[j];
                j++;
                k++;
            }
        }
        if(j==m){
            while(i<=n-1){
                res[k]=arr1[i];
                i++;
                k++;
            }
        }

    }
    return res;
 }
int main(){
    
vector<int > v1;
vector<int > v2;
v1.push_back(10);
v1.push_back(5);
v1.push_back(8);
v1.push_back(15);
v2.push_back(17);
v2.push_back(1);
v2.push_back(18);

vector <int> v= merge(v1,v2);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

    return 0;
}