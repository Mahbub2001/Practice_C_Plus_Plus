#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }
    if (v.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        long long last = 1;
        for (int i = 0; i < k - 1; i++)
        {
            cout << v[i] << " ";
        }
        for (int i = k - 1; i < v.size(); i++)
        {
            last *= v[i];
        }
        cout << last << endl;
    }

    return 0;
}