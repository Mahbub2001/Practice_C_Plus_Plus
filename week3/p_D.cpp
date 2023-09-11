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
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long num = v[0] * v[n - 1];

        vector<long long> v1;
        for (long long i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                v1.push_back(i);
                if (i != num / i)
                {
                    v1.push_back(num/i);
                }
            }
        }
        sort(v1.begin(), v1.end());
        if (v == v1)
        {
            cout << num << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}