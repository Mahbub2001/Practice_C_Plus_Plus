// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int E;
//     cin >> E;

//     vector<pair<long long int, long long int>> v(E);
//     for (int i = 0; i < E; i++)
//     {
//         cin >> v[i].first >> v[i].second;
//     }

//     sort(v.begin(), v.end());

//     for (const auto &e : v)
//     {
//         cout << e.first << " " << e.second << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// #define pi pair<int, int>

// const int N = 1005;
// int dis[N][N];
// bool vis[N][N];
// int n, m;
// vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// bool isValid(int cI, int cJ)
// {
//     if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && !vis[cI][cJ])
//     {
//         return true;
//     }
//     else
//         return false;
// }

// void bfs(int si, int sj)
// {
//     queue<pi> q;
//     q.push({si, sj});
//     dis[si][sj] = 0;
//     vis[si][sj] = true;

//     while (!q.empty())
//     {
//         pi parent = q.front();
//         int pI = parent.first;
//         int pJ = parent.second;
//         q.pop();
//         for (int i = 0; i < 4; i++)
//         {
//             pi p = path[i];
//             int cI = pI + p.first;
//             int cJ = pJ + p.second;
//             if (isValid(cI, cJ))
//             {
//                 vis[cI][cJ] = true;
//                 q.push({cI, cJ});
//                 dis[cI][cJ] = dis[pI][pJ] + 1;
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> n >> m;
//     char a[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//             if (a[i][j] == '-')
//             {
//                 vis[i][j] = true;
//             }
//         }
//     }

//     int si, sj, di, dj;
//     cin >> si >> sj >> di >> dj;

//     bfs(si, sj);

//     if (vis[di][dj])
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// #define pi pair<int, int>

// const int N = 1005;
// int dis[N][N];
// bool vis[N][N];
// int n, m;
// vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// bool isValid(int cI, int cJ)
// {
//     if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && !vis[cI][cJ])
//     {
//         return true;
//     }
//     else
//         return false;
// }

// int bfs(int si, int sj)
// {
//     int area = 0;
//     queue<pi> q;
//     q.push({si, sj});
//     vis[si][sj] = true;

//     while (!q.empty())
//     {
//         pi parent = q.front();
//         int pI = parent.first;
//         int pJ = parent.second;
//         q.pop();
//         area++;

//         for (int i = 0; i < 4; i++)
//         {
//             pi p = path[i];
//             int cI = pI + p.first;
//             int cJ = pJ + p.second;
//             if (isValid(cI, cJ))
//             {
//                 vis[cI][cJ] = true;
//                 q.push({cI, cJ});
//             }
//         }
//     }

//     return area;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> n >> m;
//     char a[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//             if (a[i][j] == '-')
//             {
//                 vis[i][j] = true;
//             }
//         }
//     }

//     vector<int> arears;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j])
//             {
//                 int area = bfs(i, j);
//                 arears.push_back(area);
//             }
//         }
//     }

//     if (arears.empty())
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         int min_area = *min_element(arears.begin(), arears.end());
//         cout << min_area << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";

// void bfs(const vector<vector<pair<int, int>>> &graph, int S, int d, int dw)
// {
//     vector<int> dis(graph.size(), INT_MAX);
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

//     dis[S] = 0;
//     pq.push({0, S});

//     while (!pq.empty())
//     {
//         int u = pq.top().second;
//         int d = pq.top().first;
//         pq.pop();

//         if (d > dis[u])
//             continue;

//         for (auto eg : graph[u])
//         {
//             int v = eg.first;
//             int w = eg.second;

//             if (dis[u] + w < dis[v])
//             {
//                 dis[v] = dis[u] + w;
//                 pq.push({dis[v], v});
//             }
//         }
//     }

//     if (dis[d] <= dw)
//     {
//         cout << "YES"<<endl;
//     }
//     else
//     {
//         cout << "NO"<<endl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int N, E;
//     cin >> N >> E;

//     vector<vector<pair<int, int>>> graph(N + 1); 
//     for (int i = 0; i < E; i++)
//     {
//         int a, b, w;
//         cin >> a >> b >> w;
//         graph[a].push_back({b, w});
//         graph[b].push_back({a, w});
//     }

//     int S;
//     cin >> S;

//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int d, dw;
//         cin >> d >> dw;

//         bfs(graph, S, d, dw);
//     }

//     return 0;
// }

