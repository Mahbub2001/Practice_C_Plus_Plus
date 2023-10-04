#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, sum = 0;
    int mn = INT_MAX;
    int mx = INT_MIN;

    cin >> n >> x;

    for (size_t i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        mn = min(a, mn);
        mx = max(a, mx);
        sum += a;
    }
    sum = sum - mn - mx;
    int diff = x - sum;

    if ((diff <= mn) || (mn == mx && sum + mx >= x))
    {
        cout << 0 << endl;
        return 0;
    }
    if ((diff > mx) || (diff > 100))
    {
        cout << -1 << endl;
        return 0;
    }

    if (diff <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << diff << endl;
    }

    return 0;
}