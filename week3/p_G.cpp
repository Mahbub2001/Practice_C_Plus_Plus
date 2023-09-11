#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<long long> v1;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v1.push_back(i);
            if (i != n / i)
            {
                v1.push_back(n / i);
            }
        }
    }
    sort(v1.begin(), v1.end());
    for (int val : v1)
    {
        cout << val << " ";
    }
    return 0;
}