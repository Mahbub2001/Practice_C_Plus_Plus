#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> d(n), s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> d[i] >> s[i];
        }
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, ((s[i] - 1) / 2) + d[i]);
        }
        cout << mn << endl;
    }

    return 0;
}