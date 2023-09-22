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

        int i = 0, count = 0;
        while (true)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                s[i] = 'B';
                s[i + 1] = 'C';
                count++;
                i=0;
            }
            else if (s[i] == 'B' && s[i + 1] == 'A')
            {
                s[i] = 'C';
                s[i + 1] = 'B';
                count++;
                i=0;
            }
            else
            {
                i++;
                
            }
            if (i == s.size())
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}