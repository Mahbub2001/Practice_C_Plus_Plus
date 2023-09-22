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
        int n, k, count = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        int i = 0, j = 0;
        while (i < n)
        {
            if (s[i] == 'B')
            {
                j = 0;
                while (j <= k)
                {
                    j++;
                }
                i += (k - 1);
                count++;
            }
            i++;
        }
        cout << count << endl;
    }

    return 0;
}