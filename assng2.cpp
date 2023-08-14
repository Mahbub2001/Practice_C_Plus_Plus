// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 5;
// vector<int> graph[N];
// bool visited[N];
// int level[N];

// void bfs(int s)
// {
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;
//     level[s] = 0;

//     while (!q.empty())
//     {
//         int u = q.front();
//         q.pop();
//         for (int v : graph[u])
//         {
//             if (visited[v])
//                 continue;
//             q.push(v);
//             visited[v] = true;
//             level[v] = level[u] + 1;
//         }
//     }
// }

// int main()
// {
//     int N, E;
//     cin >> N >> E;

//     for (int i = 0; i < E; i++)
//     {
//         int A, B;
//         cin >> A >> B;
//         graph[A].push_back(B);
//         graph[B].push_back(A);
//     }

//     int Q;
//     cin >> Q;

//     for (int i = 0; i < Q; i++)
//     {
//         int S, D;
//         cin >> S >> D;
//         memset(visited, false, sizeof(visited));
//         memset(level, 0, sizeof(level));

//         bfs(S);
//         if (visited[D])
//             cout << level[D] << endl;
//         else
//             cout << -1 << endl;
//     }

//     return 0;
// }

// Question-4
// #include <bits/stdc++.h>
// using namespace std;

// void bfs(int K, int N, vector<int> graph[])
// {
//     vector<bool> visited(N, false);
//     queue<int> q;
//     q.push(K);
//     visited[K] = true;
//     int count = -1;

//     while (!q.empty())
//     {
//         int x = q.front();
//         q.pop();
//         count++;

//         for (int v : graph[x])
//         {
//             if (!visited[v])
//             {
//                 visited[v] = true;
//                 q.push(v);
//             }
//         }
//     }

//     cout << count << endl;
// }

// int main()
// {
//     int N, E;
//     cin >> N >> E;

//     vector<int> graph[N];
//     for (int i = 0; i < E; ++i)
//     {
//         int A, B;
//         cin >> A >> B;
//         graph[A].push_back(B);
//         graph[B].push_back(A);
//     }
//     int K;
//     cin >> K;
//     bfs(K, N, graph);

//     return 0;
// }

// Question-3
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N, E;
//     cin >> N >> E;

//     vector<int> graph[N];
//     for (int i = 0; i < E; i++)
//     {
//         int A, B;
//         cin >> A >> B;
//         graph[A].push_back(B);
//         graph[B].push_back(A);
//     }
//     int K;
//     cin >> K;
//     int count = graph[K].size();
//     cout << count << endl;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int flag[1005];
const int N = 1e5 + 5;
vector<int> graph[N];
vector<int>c;
bool visited[N];

void bfs(int s)
{
    queue<int> q;
    int count =0;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        count++;
        for (int v : graph[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
        }
    }
    c.push_back(count);
}


int main()
{
    int N, E;
    cin >> N >> E;

    for (int i = 0; i < E; i++)
    {
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }
    int m = 1000;
    for(int i =0; i<= m; i++){
        if(visited[i] == true) continue;
        bfs(i);
    }

    sort(c.begin(), c.end());
    for(int val:c){
        if(val == 1) continue;
        cout<<val<<" ";
    }


    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 5;
// vector<int> graph[N];
// bool visited[N];
// int level[N];

// void bfs(int s)
// {
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;
//     level[s] = 0;

//     while (!q.empty())
//     {
//         int u = q.front();
//         q.pop();

//         for (int v : graph[u])
//         {
//             if (!visited[v])
//             {
//                 q.push(v);
//                 visited[v] = true;
//                 level[v] = level[u] + 1;
//             }
//         }
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//         graph[v].push_back(u);
//     }

//     bfs(0);

//     int L;
//     cin >> L;
//     vector<int> vv;
//     for(int i = 0;i<=1e5;i++){
//         if(level[i] == L){
//             if(level[0]) continue;
//             vv.push_back(i);
//         }
//     }
//     if (vv.empty())
//     {
//         cout << -1 << endl;
//     }
//     else if(level[0] == L){
//         cout<<0<<endl;
//     }
//     else
//     {
//         for (int val : vv)
//         {
//             cout << val << " ";
//         }
//     }

//     return 0;
// }