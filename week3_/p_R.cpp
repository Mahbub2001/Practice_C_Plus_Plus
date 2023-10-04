#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq[4][4];
    vector<pair<int, int>> vp(n);
    vector<int> price(n);

    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vp[i].first = x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vp[i].second = x;
    }

    for (int i = 0; i < n; i++)
    {
        pq[vp[i].first][vp[i].second].push(price[i]);
    }

    int person;
    cin >> person;
    while (person--)
    {
        int color;
        cin >> color;
        int ans = INT_MAX;
        int a = -1, b = -1;
        for (int i = 1; i <= 3; i++)
        {
            if (!pq[i][color].empty())
            {
                if (pq[i][color].top() < ans)
                {
                    ans = pq[i][color].top();
                    a = i;
                    b = color;
                }
            }
            if (!pq[color][i].empty())
            {
                if (pq[color][i].top() < ans)
                {
                    ans = pq[color][i].top();
                    a = color;
                    b = i;
                }
            }
        }
        if (a == -1 && b == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << " ";
            pq[a][b].pop();
        }
    }
    cout << endl;
    return 0;
}
