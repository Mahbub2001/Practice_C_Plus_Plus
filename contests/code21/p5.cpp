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
        long long n, k, l = 0, h = INT_MAX, result = INT_MAX;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (l <= h)
        {
            long long sub = (h - l) / 2 + l;
            long long count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] < sub)
                {
                    count += (sub - arr[i]);
                }
            }
            if (count <= k)
            {
                result = sub;
                l = sub + 1;
            }
            else
            {
                h = sub - 1;
            }
        }
        cout << result << endl;
    }

    return 0;
}