#include <iostream>
using namespace std;
int add(int a,int b){
    int c=a+b;
    return c;
}
float add(float a,float b){
    float c=a+b;
    return c;
}
int main(){
    float a=5.44,b=5.55;
    cout<<add(a,b);
}