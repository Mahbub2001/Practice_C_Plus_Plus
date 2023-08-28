#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

const int MAX_N = 10;
int N, M;
vector<pair<int, int>> roads[MAX_N + 1];
bool visited[MAX_N + 1];

int dfs(int s)
{
    visited[s] = true;
    int mx = 0;

    for (const auto &road : roads[s])
    {
        int child = road.first;
        int length = road.second;
        if (!visited[child])
        {
            mx = max(mx, length + dfs(child));
        }
    }

    visited[s] = false;
    return mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    for (int i = 0; i < M; ++i)
    {
        int A, B, C;
        cin >> A >> B >> C;
        roads[A].push_back({B, C});
        roads[B].push_back({A, C});
    }

    int result = 0;
    for (int i = 1; i <= N; ++i)
    {
        result = max(result, dfs(i));
    }

    cout << result << endl;

    return 0;
}

