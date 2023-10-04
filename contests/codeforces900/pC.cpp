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
        long long n, k, x;
        cin >> n >> k >> x;
        if ((k * (k + 1) / 2 > x) || ((2 * n - k + 1) * k / 2 < x))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}