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
        long long n;
        cin >> n;
        long long sum1 = 0, sum2 = 0;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            sum1 += v[i];
        }
        vector<long long> v2(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v2[i];
            sum2 += v2[i];
        }
        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());
        cout << min(sum1 + v2[0] * n, sum2 + v[0] * n)<<endl;
    }

    return 0;
}