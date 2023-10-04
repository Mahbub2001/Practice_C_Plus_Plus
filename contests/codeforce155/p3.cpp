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
        long long mod = 998244353;
        string str;
        cin >> str;
        long long n = str.size();
        vector<long long> v1;
        long long count = 0;
        for (long long i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                count++;
            }
            else
            {
                if (count)
                {
                    v1.push_back(count);
                }
                count = 0;
            }
        }
        if (count)
            v1.push_back(count);
        vector<long long> v2;
        count = 0;
        for (long long i = 0; i < n; i++)
        {
            if (str[i] == '0')
                count++;
            else
            {
                if (count)
                    v2.push_back(count);
                count = 0;
            }
        }
        if (count)
            v2.push_back(count);
        long long ans1 = 0, ans2 = 1;
        auto fac = [&](long long n) -> long long
        {
            if (n == 0)
            {
                return 1;
            }
            long long ans = 1;
            for (long long i = 2; i <= n; i++)
            {
                (ans *= i) %= mod;
            }
            return ans % mod;
        };
        for (auto el : v1)
        {
            (ans1 += (el - 1)) %= mod;
            (ans2 *= el) %= mod;
        }
        for (auto el : v2)
        {
            (ans1 += (el - 1)) %= mod;
            (ans2 *= el) %= mod;
        }
        (ans2 *= fac(ans1)) %= mod;
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}