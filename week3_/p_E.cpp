#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    assert(n >= 1 && n <= 20 && m >= 1 && m <= 20);
    map<string, string> mp;
    stack<string> stk;
    for (int i = 0; i <= n; i++)
    {
        string s;
        getline(cin, s);
        if (s == "")
            continue;
        assert(s.length() >= 1 && s.length() <= 200);
        if (s[1] != '/')
        {
            int st = 1, fin;
            for (fin = 1;; fin++)
            {
                if (s[fin] == ' ' || s[fin] == '>')
                    break;
            }
            string tag = s.substr(st, fin - st);
            string prev = "";
            if (!stk.empty())
            {
                prev = stk.top();
                prev = prev + ".";
            }
            prev = prev + tag;

            if (s[fin] == '>')
            {
                stk.push(prev);
                continue;
            }
            st = fin + 1;
            for (fin = st;; fin++)
            {
                if (s[fin] == ' ')
                    break;
            }
            string attr = s.substr(st, fin - st);
            fin += 4;
            st = fin;
            for (;; fin++)
            {
                if (s[fin] == '"')
                    break;
            }
            string val = s.substr(st, fin - st);
            mp[prev + "~" + attr] = val;
            fin += 1;
            while (s[fin] != '>')
            {
                fin += 1;
                st = fin;
                for (;; fin++)
                {
                    if (s[fin] == ' ')
                        break;
                }
                attr = s.substr(st, fin - st);
                fin += 4;
                st = fin;
                while (s[fin] != '"')
                {
                    fin++;
                }

                val = s.substr(st, fin - st);
                mp[prev + "~" + attr] = val;
                fin += 1;
            }
            stk.push(prev);
        }
        else
        {
            stk.pop();
        }
    }
    while (m--)
    {
        string q;
        cin >> q;
        assert(q.length() >= 1 && q.length() <= 200);
        if (mp.find(q) == mp.end())
        {
            cout << "Not Found!\n";
        }
        else
            cout << mp[q] << endl;
    }

    return 0;
}
