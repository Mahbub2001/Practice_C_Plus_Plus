#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    vector<int> v1;
    deque<int> dq;

    for (int i = 0; i < v.size(); i++)
    {
        while (!dq.empty() && dq.front() < i - k + 1)
        {
            dq.pop_front();
        }

        while (!dq.empty() && v[i] >= v[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1)
        {
            v1.push_back(v[dq.front()]);
        }
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;

    return 0;
}