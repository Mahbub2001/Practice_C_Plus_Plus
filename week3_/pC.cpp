#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    map<int, int> mp;
    vector<int> v;

    int n;
    while (cin >> n)
    {
        if (mp[n] == 0)
        {
            v.push_back(n);
        }
        mp[n]++;
    }
    for (auto n : v)
    {
        cout << n << " " << mp[n] << endl;
    }

    return 0;
}
