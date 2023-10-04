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
    vector<int> freq(n, 0);
    vector<int> v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= 100000)
        {
            v[i] = x;
            freq[v[i]]++;
        }
        else
        {
            count++;
        }
    }
    sort(v.begin(), v.end());

    for (int i = v[0]; i <= v[n - 1]; i = i + 1)
    {
        if (freq[i] > i)
        {
            count = count + freq[i] - i;
        }
        else if (freq[i] < i)
        {
            count = count + freq[i];
        }
    }

    cout << count;

    return 0;
}
