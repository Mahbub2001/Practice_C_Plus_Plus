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
        int a, b;
        cin >> a >> b;
        map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            mp[x]--;
        }
        int sum = 0;
        for (auto it : mp)
        {
            sum += abs(it.second);
        }
        cout << sum << endl;
    }

    return 0;
}