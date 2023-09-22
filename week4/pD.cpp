#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
bool check(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string x;
    set<string> s;
    vector<string> v;
    while (cin >> x && x != "XXXXXX")
    {
        s.insert(x);
    }
    while (cin >> x && x != "XXXXXX")
    {
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        int temp = 0;
        for (auto x : s)
        {

            if (check(x, v[i]))
            {
                cout << x << endl;
                temp = 1;
            }
        }
        if (!temp)
        {
            cout << "NOT A VALID WORD" << endl;
        }
        cout << "******" << endl;
    }

    return 0;
}