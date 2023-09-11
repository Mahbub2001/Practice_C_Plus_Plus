#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

bool is_prime(int n)
{
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        double m, n;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            if (i == 1 || (i % 2 == 0 && i != 2))
                continue;
            if (is_prime(i))
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }

    return 0;
}