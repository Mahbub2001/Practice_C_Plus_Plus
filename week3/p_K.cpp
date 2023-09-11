#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp1, mp2;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp1[v[i]]++;
    }

    int x = *max_element(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (x % v[i])
            continue;
        if (mp2[v[i]])
            continue;
        mp2[v[i]] = 1;
        mp1[v[i]]--;
    }

    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp1[v[i]])
        {
            y = max(y, v[i]);
        }
    }

    cout << x << ' ' << y << endl;

    return 0;
}