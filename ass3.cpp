// 3
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
const int N = 1e5 + 5;

class Edge {
public:
    int a, b;
    long long int w;
    
    Edge(int a, int b, long long int w) : a(a), b(b), w(w) {}
    
    bool operator<(const Edge& o) const {
        return w < o.w;
    }
};

int parent[N];
int parentSize[N];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    vector<Edge> edges;

    for (int i = 0; i < e; ++i)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        edges.push_back(Edge(a, b, w));
    }

    sort(edges.begin(), edges.end());

    long long int total_cost = 0;
    dsu_set(n);

    for (const Edge& edge : edges)
    {
        int a = edge.a, b = edge.b;
        long long int w = edge.w;

        if (dsu_find(a) != dsu_find(b))
        {
            dsu_union(a, b);
            total_cost += w;
        }
    }
    int cmp = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (parent[i] == -1)
        {
            cmp++;
        }
    }

    if (cmp == 1)
    {
        cout << total_cost << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}


// //1
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// const int N = 1e5 + 5;

// int parent[N];
// int parentSize[N];

// void dsu_set(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         parent[i] = -1;
//         parentSize[i] = 1;
//     }
// }

// int dsu_find(int node)
// {
//     while (parent[node] != -1)
//     {
//         node = parent[node];
//     }
//     return node;
// }

// void dsu_union(int a, int b)
// {
//     int leaderA = dsu_find(a);
//     int leaderB = dsu_find(b);
//     if (leaderA != leaderB)
//     {
//         if (parentSize[leaderA] > parentSize[leaderB])
//         {
//             parent[leaderB] = leaderA;
//             parentSize[leaderA] += parentSize[leaderB];
//         }
//         else
//         {
//             parent[leaderA] = leaderB;
//             parentSize[leaderB] += parentSize[leaderA];
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n, e;
//     cin >> n >> e;
//     dsu_set(n);
//     int cycle = 0;

//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;

//         if (dsu_find(a) == dsu_find(b))
//         {
//             cycle++;
//         }
//         else
//         {
//             dsu_union(a, b);
//         }
//     }

//     cout << cycle << endl;

//     return 0;
// }



// // 2
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// const long long int INF = LLONG_MAX;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int N, E;
//     cin >> N >> E;

//     vector<vector<long long int>> v(N + 1, vector<long long int>(N + 1, INF));

//     for (int i = 1; i <= N; ++i)
//     {
//         v[i][i] = 0;
//     }

//     for (int i = 0; i < E; i++)
//     {
//         int A, B;
//         long long int W;
//         cin >> A >> B >> W;
//         v[A][B] = min(v[A][B], W);
//     }

//     for (int k = 1; k <= N; k++)
//     {
//         for (int i = 1; i <= N; i++)
//         {
//             for (int j = 1; j <= N; j++)
//             {
//                 if (v[i][k] != INF && v[k][j] != INF)
//                 {
//                     v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
//                 }
//             }
//         }
//     }
//     int Q;
//     cin >> Q;

//     for (int i = 0; i < Q; i++)
//     {
//         int X, Y;
//         cin >> X >> Y;

//         if (v[X][Y] == INF)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << v[X][Y] << endl;
//         }
//     }

//     return 0;
// }

// //4
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// const long long int INF = 1e18;

// class Edge
// {
// public:
//     int a, b;
//     long long int w;
// };

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n, e;
//     cin >> n >> e;

//     vector<Edge> v(e);

//     for (int i = 0; i < e; i++)
//     {
//         cin >> v[i].a >> v[i].b >> v[i].w;
//     }

//     int s;
//     cin >> s;
//     long long int dis[n + 1];
//     for (int i = 1; i <= n; ++i)
//     {
//         dis[i] = INF;
//     }
//     dis[s] = 0;

//     for (int i = 1; i <= n - 1; ++i)
//     {
//         for (const Edge &ed : v)
//         {
//             if (dis[ed.a] != INF && dis[ed.a] + ed.w < dis[ed.b])
//             {
//                 dis[ed.b] = dis[ed.a] + ed.w;
//             }
//         }
//     }

//     int q;
//     cin >> q;

//     for (int i = 0; i < q; i++)
//     {
//         int d;
//         cin >> d;

//         bool cycle = false;
//         for (const Edge &ed : v)
//         {
//             if (dis[ed.a] != INF && dis[ed.a] + ed.w < dis[ed.b])
//             {
//                 cycle = true;
//                 break;
//             }
//         }

//         if (cycle)
//         {
//             cout << "Negative Cycle Detected" << endl;
//             break;
//         }

//         if (dis[d] != INF)
//         {
//             cout << dis[d] << endl;
//         }
//         else
//         {
//             cout << "Not Possible" << endl;
//         }
//     }

//     return 0;
// }
