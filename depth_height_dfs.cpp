#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> graph[N];

bool visited[N];
int depth[N];
int height[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : graph[u])
    {
        if (visited[v] == true)
            continue;
        depth[v] = depth[u] + 1;
        dfs(v);
        // now we can determine the height of u
        // if (height[v] + 1 > height[u])
        // {
        //     height[u] = height[v] + 1;
        // }
        height[u] = max(height[u], height[v] + 1);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // for(int i = 0;i<=n;i++){
    //     cout<<"Node "<<i<<": ";
    //     for(int j:graph[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    dfs(1);
    // visiting array
    //  for (int i = 1; i <= n; i++)
    //  {
    //      cout << "Node " << i << "status: " << visited[i];
    //  }

    for (int i = 1; i <= n; i++)
    {
        cout << "Depth of Node " << i << ": " << depth[i] << endl;
    }

    cout << "****************************\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "Height of Node " << i << ": " << height[i] << endl;
    }

    return 0;
}

/*

12
11
1 2
1 3
1 10
2 4
2 5
3 9
5 6
5 7
6 8
10 11
10 12

*/