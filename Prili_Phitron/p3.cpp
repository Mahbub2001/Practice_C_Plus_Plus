#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;

        vector<int> v;

        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                if (count != 0)
                {
                    v.push_back(count);
                }
                count = 0;
            }
            else
            {
                count++;
            }
        }
        v.push_back(count);
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0;
        for (size_t i = 0; i < v.size(); i += 2)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}
