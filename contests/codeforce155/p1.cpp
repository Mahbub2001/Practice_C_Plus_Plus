#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x, y;
        vector<pair<long long, long long>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            a[i] = {x, y};
        }

        vector<pair<long long, long long>> v2;
        for (int i = 0; i < n; i++)
        {
            if (a[i].second >= a[0].second)
            {
                v2.push_back(a[i]);
            }
        }
        long long mx = 0;
        for (int i = 1; i < v2.size(); i++)
        {
            mx = max(mx, v2[i].first);
        }
        if (v2[0].first > mx)
        {
            cout << v2[0].first << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}