#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
const int MOD = 1e9 + 7;
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
        string s;
        cin >> s;
        long long result = 1;

        for (int i = 2; i < n; i += 2)
        {
            int a = s[i - 2] - '0';
            int b = s[i - 1] - '0';
            int c = s[i] - '0';
            int count = 0;

            if ((a | b) == c)
                count++;
            if ((a & b) == c)
                count++;
            if ((a ^ b) == c)
                count++;

            result = (result * count) % MOD;
        }

        cout << result << endl;
    }

    return 0;
}