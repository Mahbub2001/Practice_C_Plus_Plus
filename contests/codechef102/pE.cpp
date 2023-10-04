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
        long long n, k;
        cin >> n >> k;

        if ((k < (3 * n / 2)) || ((k - 3 * n / 2) & 1))
        {
            cout << -1 << endl;
        }
        else
        {
            vector<long long> values;

            for (long long i = 0; i < n / 2; i++)
            {
                values.push_back(1);
            }

            for (long long i = 0; i < n / 2; i++)
            {
                values.push_back(2);
            }
            // for (int i = 0; i < values.size(); i++)
            // {
            //    cout<<values[i]<<" ";
            // }
            
            long long required = (k - 3 * n / 2);

            for (long long i = 0; i < n; i++)
            {
                long long remaining = 1e5 - values[i];

                if (values[i] & 1)
                {
                    remaining--;
                }

                if (required >= remaining)
                {
                    required -= remaining;
                    values[i] += remaining;
                }
                else
                {
                    values[i] += required;
                    required = 0;
                }
            }

            if (required)
            {
                cout << -1 << endl;
                continue;
            }

            for (long long i = 0; i < n; i++)
            {
                cout << values[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}