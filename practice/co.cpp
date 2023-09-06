// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";

// long long multiply(long long a, long long b, long long mod)
// {
//     long long result = 0;
//     while (b > 0)
//     {
//         if (b % 2 == 1)
//         {
//             result = (result + a) % mod;
//         }
//         a = (a * 2) % mod;
//         b /= 2;
//     }
//     return result;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long long a, b;
//         long long mod = 100LL;

//         cin >> a >> b;

//         long long result = multiply(a, b, mod);

//         cout<< result << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     int N[100];
//     int sum = 6;

//     for (int i = 1; i <= 21; i += 2)
//     {
//         if (i == 1)
//         {
//             N[i] = 6;
//         }
//         else
//         {
//             sum += 1;
//             N[i] = sum;
//         }
//     }

//     for (int rows = 1; rows <= N[t]; rows++)
//     {
//         for (int spc = 1; spc <= N[t] - rows; spc++)
//         {
//             cout<<" ";
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }

//     for (int i = 1; i <= 5; i++)
//     {
//         cout<<"     ";
//         for (int j = 1; j <= t; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int N;
//     cin >> N;
//     vector<long long> bs(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> bs[i];
//     }
//     int Q;
//     cin >> Q;
//     while (Q--)
//     {
//         long long A, B, X;
//         cin >> A >> B >> X;

//         for (long long i = A; i <= B; i++)
//         {
//             bs[i] += X;
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         cout << bs[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int N;
//     cin >> N;

//     vector<bool> tr(N);
//     vector<long long> bar(N);
//     vector<long long> dp(N + 1);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> bar[i];
//         if (bar[i] == -1)
//         {
//             bar[i] = 0;
//             tr[i] = true;
//         }
//     }
//     dp[0] = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         if (i >= 2)
//         {
//             dp[i] = max(dp[i - 1], bar[i - 1] + dp[i - 2]);
//         }
//         else
//         {
//             dp[i] = max(dp[i - 1], bar[i - 1]);
//         }
//     }

//     cout << dp[N] << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

const int N = 1e5 + 5;

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
        else if (parentSize[leaderA] < parentSize[leaderB])
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
        else
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA]++;
        }
    }
}

class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    vector<Edge> ans;
    dsu_set(n);

    for (int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }

    sort(v.begin(), v.end(), cmp);
    long long sum = 0;
    int edgeCount = 0;

    for (Edge val : v)
    {
        int a = val.a;
        int b = val.b;
        int w = val.w;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA != leaderB)
        {
            ans.push_back(val);
            dsu_union(a, b);
            sum += (long long)w;
            edgeCount++;
        }
    }

    if (edgeCount == n - 1)
    {
        cout << edgeCount << " " << sum << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    return 0;
}
