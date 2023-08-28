// Time limit: 1.00 s Memory limit: 512 MB
// Syrjälä's network has n
//  computers and m
//  connections. Your task is to find out if Uolevi can send a message to Maija, and if it is possible, what is the minimum number of computers on such a route.

// Input

// The first input line has two integers n
//  and m
// : the number of computers and connections. The computers are numbered 1,2,…,n
// . Uolevi's computer is 1
//  and Maija's computer is n
// .

// Then, there are m
//  lines describing the connections. Each line has two integers a
//  and b
// : there is a connection between those computers.

// Every connection is between two different computers, and there is at most one connection between any two computers.

// Output

// If it is possible to send a message, first print k
// : the minimum number of computers on a valid route. After this, print an example of such a route. You can print any valid solution.

// If there are no routes, print "IMPOSSIBLE".

// Constraints
// 2≤n≤105

// 1≤m≤2⋅105

// 1≤a,b≤n

// Example

// Input:
// 5 5
// 1 2
// 1 3
// 1 4
// 2 3
// 5 4

// Output:
// 3
// // 1 4 5

#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

const int N = 1e5 + 5;

vector<bool> visited(N, false);
vector<int> level(N, 0);
vector<int> parent(N, -1);
vector<int> graph[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    level[source] = 0;
    visited[source] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : graph[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
            parent[v] = u;
            level[v] = level[u] + 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bfs(1);

    cout << level[n] << endl;
    int curr = n;
    vector<int> path;
    while (curr != -1)
    {
        path.push_back(curr);
        curr = parent[curr];
    }
    reverse(path.begin(), path.end());
    for (auto p : path)
    {
        cout << p << " ";
    }

    return 0;
}