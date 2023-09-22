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
        string s;
        cin >> s;
        if (s == "abc")
        {
            cout << "YES" << endl;
        }
        else
        {
            if ((s[0] != 'a' && s[1] != 'b' && s[2] == 'c') || (s[1] != 'b' && s[2] != 'c' && s[0] == 'a') || (s[0] != 'a' && s[2] != 'c' && s[1] == 'b'))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}