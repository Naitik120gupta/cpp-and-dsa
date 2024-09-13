#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &v)
{
    int lo = 0;
    int mid = 0;
    int high = v.size() - 1;

    while (mid <= high){
        if (v[mid] == 2){
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--; }

        else if (v[mid] == 0){
            int temp = v[mid];
            v[mid] = v[lo];
            v[lo] = temp;
            lo++;
            mid++; }

        else mid++;
    }

    return;
}
int main(){





    return 0;
}