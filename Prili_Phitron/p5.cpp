#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
const int N = 1e5 + 5;

class Edge
{
public:
    int a, b;
    long long int w;

    Edge(int a, int b, long long int w) : a(a), b(b), w(w) {}

    bool operator<(const Edge &o) const
    {
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

    long long int total_cost = 0, rmv = 0;
    dsu_set(n);

    for (const Edge &edge : edges)
    {
        int a = edge.a, b = edge.b;
        long long int w = edge.w;

        if (dsu_find(a) != dsu_find(b))
        {
            dsu_union(a, b);
            total_cost += w;
        }
        else
        {
            rmv++;
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
        cout << rmv << " " << total_cost << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    return 0;
}