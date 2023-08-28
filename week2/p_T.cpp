#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        deque<int> dq;
        for (int i = 0; i < N; i++)
        {
            while (!dq.empty() && dq.front() <= i - K)
            {
                dq.pop_front();
            }
            while (!dq.empty() && v[dq.back()] <= v[i])
            {
                dq.pop_back();
            }

            dq.push_back(i); 
            if (i >= K - 1)
            {
                cout << v[dq.front()] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
