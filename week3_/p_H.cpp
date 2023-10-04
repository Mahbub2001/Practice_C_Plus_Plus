#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> v1;
    vector<pair<string, string>> v2;

    for (int i = 0; i < n; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        v1.push_back({str1, str2});
    }

    for (int i = 0; i < m; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        str2.pop_back();
        v2.push_back({str1, str2});
    }

    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v1.size(); j++) 
        {
            if (v2[i].second == v1[j].second)
            {
                cout << v2[i].first << " " << v2[i].second << "; "
                     << "#" << v1[j].first << endl;
                continue;
            }
        }
    }

    return 0;
}
