#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define hell() ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int solve(int x, int y)
{
    int n = 0;
    if (x == y)
    {
        n = 0;
    }
    else if (x < y)
    {
        y - x;
    }
    else
    {
        if (((x - y) % 2 == 0))
        {
            n = (x - y) / 2;
        }
        else
        {
            n = (x = y) / 2 + 2;
        }
    }

    return n;
}
int main()
{
    hell();
    int u;
    cin >> u;
    vector<int> results;
    while (u--)
    {
        int x, y;
        cin >> x >> y;
        results.push_back(solve(x, y));
    }
    for (int i : results)
    {
        cout << i << endl;
    }
    return 0;
}
