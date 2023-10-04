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
        int n, x;
        cin >> n;
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            int now = 34;
            while (now)
            {
                v[i].push_back(x % 2);
                x /= 2;
                now--;
            }
        }
        vector<vector<int>> ans(34);
        for (int i = 0; i < 34; i++)
        {
            ans[i].push_back(0);
            for (int j = 0, sum = 0; j < n; j++)
            {
                sum += v[j][i];
                ans[i].push_back(sum);
            }
        }

        int q, l, k;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> l >> k;
            int left = l;
            int right = n;
            int r = -1;
            while (left <= right)
            {
                int sum = 0;
                int mid = (left + right) / 2;
                for (int j = 0; j < 34; j++)
                {
                    if (ans[j][mid] - ans[j][l - 1] == mid - l + 1)
                    {
                        sum += (int)pow(2, j);
                    }
                }
                if (sum >= k)
                {
                    left = mid + 1;
                    r = mid;
                }
                else
                {
                    right = mid - 1;
                }
            }

            cout << r << " ";
        }
        cout << endl;
    }

    return 0;
}