#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    string sub = "heidi";
    int idx = 0;

    for (char c : s)
    {
        if (c == sub[idx])
        {
            idx++;
            if (idx == sub.size())
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}