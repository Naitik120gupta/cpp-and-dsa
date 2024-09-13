#include<iostream>
using namespace std;

void changeValue(int &z)
{
    z = 100;
    cout<<&z<<endl;
}
int main()
{
    int a = 40;
    cout << a<< endl;
    changeValue(a);
    cout << a<<endl;
    cout<<&a;
    
}