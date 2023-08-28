#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int Q;
    cin >> Q;
    deque<int> dq;

    while (Q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "back")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?" << endl;
            }
            else
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if (cmd == "front")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?" << endl;
            }
            else
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if (cmd == "reverse")
        {
            reverse(dq.begin(), dq.end());
        }
        else if (cmd == "push_back")
        {
            int N;
            cin >> N;
            dq.push_back(N);
        }
        else if (cmd == "toFront")
        {
            int N;
            cin >> N;
            dq.push_front(N);
        }
    }

    return 0;
}