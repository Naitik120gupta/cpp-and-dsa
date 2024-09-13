#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    // for loop
    //  for (int i=0;i<v.size();i++){
    //      cout<<v[i]<<" ";
    //  }

    v.insert(v.begin()+2,6);
    v.erase(v.end() );
    //for-each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
}