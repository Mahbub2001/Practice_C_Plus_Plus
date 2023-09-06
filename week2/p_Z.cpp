#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int l, m;
        cin >> l >> m;
        l *= 100;

        queue<int> q1, q2;
        for (int i = 0; i < m; i++)
        {
            int length;
            string str;
            cin >> length >> str;

            if (str == "left")
            {
                q1.push(length);
            }
            else
            {
                q2.push(length);
            }
        }

        int cur = 0,count = 0;
        while (!(q1.empty() && q2.empty()))
        {
            queue<int> &cur_q = (cur == 0) ? q1 : q2;
            int cur_len = 0;

            while (!cur_q.empty() && cur_len + cur_q.front() <= l)
            {
                cur_len += cur_q.front();
                cur_q.pop();
            }

            count++;
            cur = 1 - cur;
        }

        cout << count << endl;
    }

    return 0;
}
