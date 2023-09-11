// 1

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int dp[1005][1005];

// int Knapsack(int n, int s, int v[], int w[])
// {
//     if (n == 0 || s == 0)
//     {
//         return 0;
//     }
//     if (dp[n][s] != -1)
//     {
//         return dp[n][s];
//     }
//     if (w[n - 1] <= s)
//     {
//         int op1 = Knapsack(n - 1, s - w[n - 1], v, w) + v[n - 1];
//         int op2 = Knapsack(n - 1, s, v, w);
//         return dp[n][s] = max(op1, op2);
//     }
//     else
//     {
//         return dp[n][s] = Knapsack(n - 1, s, v, w);
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n, s;
//         cin >> n >> s;
//         int v[n], w[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> w[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= s; j++)
//             {
//                 dp[i][j] = -1;
//             }
//         }

//         cout << Knapsack(n, s, v, w) << endl;
//     }
//     return 0;
// }

// 4
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// const int MAX_N = 1005;
// const int MAX_S = 1005;

// int dp[MAX_N][MAX_S];

// bool subset_sum(vector<int> &a, int n, int s)
// {
//     if (s == 0)
//         return true;
//     if (n == 0 || s < 0)
//         return false;
//     if (dp[n][s] != -1)
//         return dp[n][s];

//     if (a[n - 1] <= s)
//     {
//         return (dp[n][s] = subset_sum(a, n - 1, s - a[n - 1]) || subset_sum(a, n - 1, s));
//     }
//     else
//     {
//         return (dp[n][s] = subset_sum(a, n - 1, s));
//     }
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
//         int n, u;
//         cin >> n >> u;
//         int s = 1000 - u;
//         vector<int> a(n);

//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//         }

//         memset(dp, -1, sizeof(dp));
//         if (subset_sum(a, n, s))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

// 2
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";

// const int MAX_N = 100005;
// bool dp[MAX_N];

// bool can_reach(int n)
// {
//     dp[1] = true;
//     for (int i = 2; i <= n; i++)
//     {
//         dp[i] = false;
//         if (i >= 3 && dp[i - 3])
//         {
//             dp[i] = true;
//         }
//         if (i % 2 == 0 && dp[i / 2])
//         {
//             dp[i] = true;
//         }
//     }
//     return dp[n];
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
//         int n;
//         cin >> n;

//         if (can_reach(n))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

// 3
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        int total = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            total += A[i];
        }
        if (total % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int l = total / 2;
            vector<vector<bool>> dp(N + 1, vector<bool>(l + 1, false));

            dp[0][0] = true;
            for (int i = 1; i <= N; i++)
            {
                for (int j = 0; j <= l; j++)
                {
                    dp[i][j] = dp[i - 1][j];
                    if (j >= A[i - 1])
                    {
                        dp[i][j] = dp[i][j] || dp[i - 1][j - A[i - 1]];
                    }
                }
            }

            if (dp[N][l])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}