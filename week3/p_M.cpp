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
        bool flag = false;
        int n, a = 0, b = 0, c = 0;
        cin >> n;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                int d = n / i;

                for (int j = i + 1; j * j < d; j++)
                {
                    if (d % j == 0)
                    {
                        flag = true;
                        a = i;
                        b = j;
                        c = d / j;
                        break;
                    }
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}