#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int n, m;
        cin >> n >> m;
        deque<int> dq;

        cout << "Case " << t << ":" << endl;

        for (int i = 0; i < m; i++)
        {
            string cmd;
            cin >> cmd;

            if (cmd == "pushLeft")
            {
                int x;
                cin >> x;
                if (dq.size() < n)
                {
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                }
                else
                {
                    cout << "The queue is full" << endl;
                }
            }
            else if (cmd == "popLeft")
            {
                if (!dq.empty())
                {
                    int x = dq.front();
                    dq.pop_front();
                    cout << "Popped from left: " << x << endl;
                }
                else
                {
                    cout << "The queue is empty" << endl;
                }
            }
            else if (cmd == "pushRight")
            {
                int x;
                cin >> x;
                if (dq.size() < n)
                {
                    dq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                }
                else
                {
                    cout << "The queue is full" << endl;
                }
            }
            else if (cmd == "popRight")
            {
                if (!dq.empty())
                {
                    int x = dq.back();
                    dq.pop_back();
                    cout << "Popped from right: " << x << endl;
                }
                else
                {
                    cout << "The queue is empty" << endl;
                }
            }
        }
    }

    return 0;
}