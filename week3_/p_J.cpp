#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    map<string, bool> mp;
    string s;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> s;
        if (!mp[s])
        {
            cout << "NO" << endl;
            mp[s] = true;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}