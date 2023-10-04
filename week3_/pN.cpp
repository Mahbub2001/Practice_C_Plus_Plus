#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    map<string, int> mp;
    for (int i = 0; i < a; i++)
    {
        int x;
        string str;
        cin >> str >> x;
        mp[str] = x;
    }
    for (int i = 0; i < b; i++)
    {
        int sum = 0;
        string str;
        while (cin >> str)
        {
            if (str != ".")
            {
                sum += mp[str];
            }
            else
            {
                break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}