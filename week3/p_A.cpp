#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            long long sum = 0;
            for (long long int i = 1; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    sum += i;
                    if (i != n / i && n / i != n)
                    {
                        sum += (n / i);
                    }
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}