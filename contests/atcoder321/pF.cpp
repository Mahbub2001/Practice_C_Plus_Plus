#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
long long dp[5005];
const int mod = 998244353;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, k;
    cin >> t >> k;
    dp[0] = 1;

    while (t--)
    {
        int x;
        char ch;
        cin >> ch >> x;
        if (ch == '+')
        {
            for (int i = k; i >= x; i--)
            {
                dp[i] += dp[i - x];
                if (dp[i] >= mod)
                {
                    dp[i] -= mod;
                }
            }
        }
        else
        {
            for (int i = x; i <= k; i++)
            {
                dp[i] -= dp[i - x];
                dp[i] += mod;
                if (dp[i] >= mod)
                {
                    dp[i] -= mod;
                }
            }
        }
        cout << dp[k] << endl;
    }

    return 0;
}