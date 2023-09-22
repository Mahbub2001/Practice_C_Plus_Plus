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
    set<int> s;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x == 1)
        {
            s.insert(y);
        }
        else if (x == 2)
        {
            s.erase(y);
        }
        else
        {
            auto ptr = s.find(y);
            if (ptr != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}