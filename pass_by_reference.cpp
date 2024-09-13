#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
int main()
{
    int num1,num2;
    cin>>num1;
    cin>>num2;
    cout << "Before swap: " << "\n";
    cout << num1 << " " << num2 << "\n";

    swap(num1, num2);
    cout << "After swap: " << "\n";
    cout << num1 << " " << num2 << "\n";
    return 0;
}