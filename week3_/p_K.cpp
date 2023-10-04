#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, j = 1;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> v(n);
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < d; i++)
        {
            s.insert(v[i]);
        }
        int max_diff = *prev(s.end()) - *s.begin();
        for (int i = d; i < n; i++)
        {
            s.insert(v[i]);
            s.erase(s.find(v[i - d]));
            max_diff = max(max_diff, *prev(s.end()) - *s.begin());
        }
        cout << "Case " << j << ": " << max_diff << endl;
        j++;
    }

    return 0;
}