#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numCases;
    cin >> numCases;
    int count=0;
    int sign;

    for (int i = 0; i < numCases; i++)
    {
        int num;
        cin >> num;
        int num2=num;

        int result = 0;
        while(num2>0){
            num2%10;
            count++;
            num2=num2/10;
        }
        if(count%2==0) sign=-1;
        else sign=1;

        while (num > 9)
        {
            int digit = num % 10;
            result += sign * digit;
            sign = -sign; // Toggle between addition and subtraction
            num /= 10;
        }

        result += sign * num; // Add the last digit with the appropriate sign
        cout << result << endl;
    }
    return 0;
}
