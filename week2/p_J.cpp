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
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            for (int j = 0; j < count; j++)
            {
                cout << " ";
            }
            count += 2;
            cout << "<" << s[i] << ">" << endl;
        }
        else if (s[i] == '/')
        {
            count -= 2;
            for (int j = 0; j < count; j++)
            {
                cout << " ";
            }
            cout << "</" << s[i + 1] << ">" << endl;
            i++;
        }
    }

    return 0;
}
