#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
#define enter cout << endl
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
        vector<int> v;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if ((i != n / i) && (n / i != n))
                    v.push_back(n / i);
            }
        }
        v.push_back(n);
        int count = 0;
        for (int val : v)
        {
            if (val % 2 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}