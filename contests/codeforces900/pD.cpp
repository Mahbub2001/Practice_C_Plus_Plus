#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> l(k), r(k);
        for (int i = 0; i < k; i++)
        {
            cin >> l[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> r[i];
        }
        int q;
        cin >> q;
        vector<int> x(q);
        for (int i = 0; i < q; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < q; i++)
        {
            int xi = x[i];
            int idx = -1;
            for (int j = 0; j < k; j++)
            {
                if (l[j] <= xi && xi <= r[j])
                {
                    idx = j;
                    break;
                }
            }

            if (idx != -1)
            {
                int a = min(xi, r[idx] + l[idx] - xi);
                int b = max(xi, r[idx] + l[idx] - xi);
                reverse(s.begin() + a - 1, s.begin() + b);
            }
        }

        cout << s << endl;
    }

    return 0;
}

