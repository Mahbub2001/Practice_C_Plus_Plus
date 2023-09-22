// // //5
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define endl "\n";
// // int palin(string s)
// // {
// //     int n = s.length();
// //     vector<vector<int>> dp(n, vector<int>(n, 0));

// //     for (int l = 2; l <= n; l++)
// //     {
// //         for (int i = 0; i <= n - l; i++)
// //         {
// //             int j = i + l - 1;

// //             if (s[i] == s[j])
// //             {
// //                 dp[i][j] = dp[i + 1][j - 1];
// //             }
// //             else
// //             {
// //                 dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
// //             }
// //         }
// //     }

// //     return dp[0][n - 1];
// // }

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         string S;
// //         cin >> S;
// //         cout << palin(S) << endl;
// //     }

// //     return 0;
// // }

// // 4
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define endl "\n";
// // const int mod = 1000000007;
// // int dp[1005][1005];

// // int get_result(int n, int m, vector<int> &a)
// // {
// //     if (m == 0)
// //         return 1;
// //     if (n == 0)
// //         return 0;
// //     if (dp[n][m] != -1)
// //         return dp[n][m];

// //     int opt1 = (a[n - 1] <= m) ? get_result(n, m - a[n - 1], a) : 0;
// //     int opt2 = get_result(n - 1, m, a);

// //     return dp[n][m] = (opt1 + opt2) % mod;
// // }

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
// //     cout.tie(0);

// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         int n, m;
// //         cin >> n >> m;
// //         m = 1000 - m;

// //         vector<int> a(n);
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> a[i];
// //         }
// //         for (int i = 0; i <= n; i++)
// //         {
// //             for (int j = 0; j <= m; j++)
// //             {
// //                 dp[i][j] = -1;
// //             }
// //         }
// //         cout << get_result(n, m, a) << endl;
// //     }

// //     return 0;
// // }

// // 1
// // #include <bits/stdc++.h>
// // using namespace std;
// // bool knapsack(vector<int> &a, int n, int s, vector<vector<int>> &dp)
// // {
// //     if (n == 0)
// //     {
// //         return s == 0;
// //     }

// //     if (dp[n][s] != -1)
// //     {
// //         return dp[n][s];
// //     }

// //     if (a[n - 1] <= s)
// //     {
// //         dp[n][s] = knapsack(a, n, s - a[n - 1], dp) || knapsack(a, n - 1, s, dp);
// //     }
// //     else
// //     {
// //         dp[n][s] = knapsack(a, n - 1, s, dp);
// //     }

// //     return dp[n][s];
// // }

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         int N, M;
// //         cin >> N >> M;

// //         vector<int> marks(N);
// //         for (int i = 0; i < N; i++)
// //         {
// //             cin >> marks[i];
// //         }

// //         int x = 1000 - M;
// //         vector<vector<int>> dp(N + 1, vector<int>(x + 1, -1));

// //         if (knapsack(marks, N, x, dp))
// //         {
// //             cout << "YES" << endl;
// //         }
// //         else
// //         {
// //             cout << "NO" << endl;
// //         }
// //     }

// //     return 0;
// // }

// // 4
// //  #include <bits/stdc++.h>
// //  using namespace std;
// //  #define endl "\n";
// //  int main()
// //  {
// //      ios_base::sync_with_stdio(false);
// //      cin.tie(0);
// //      cout.tie(0);

// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         string a, b;
// //         cin >> a >> b;
// //         int n = a.size();
// //         int m = b.size();

// //         int dp[n + 1][m + 1];
// //         for (int i = 0; i <= n; i++)
// //         {
// //             for (int j = 0; j <= m; j++)
// //             {
// //                 if (i == 0 || j == 0)
// //                     dp[i][j] = 0;
// //             }
// //         }
// //         for (int i = 1; i <= n; i++)
// //         {
// //             for (int j = 1; j <= m; j++)
// //             {
// //                 if (a[i - 1] == b[j - 1])
// //                 {
// //                     dp[i][j] = dp[i - 1][j - 1] + 1;
// //                 }
// //                 else
// //                 {
// //                     dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
// //                 }
// //             }
// //         }
// //         cout << n + m - dp[n][m] << endl;
// //     }

// //     return 0;
// // }

// //

// // 2

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> marks(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> marks[i];
//         }

//         int dp[n + 1][m + 1];
//         dp[0][0] = 0;
//         for (int i = 1; i <= m; i++)
//         {
//             dp[0][i] = INT_MAX - 1;
//         }

//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 0; j <= m; j++)
//             {
//                 if (marks[i - 1] <= j)
//                 {
//                     dp[i][j] = min(1 + dp[i][j - marks[i - 1]], dp[i - 1][j]);
//                 }
//                 else
//                 {
//                     dp[i][j] = dp[i - 1][j];
//                 }
//             }
//         }

//         if (dp[n][m] == INT_MAX - 1)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << dp[n][m] << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int s = 1000 - m;
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        int dp[n + 1][s + 1];
        dp[0][0] = 0;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = INT_MAX - 1;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (w[i - 1] <= j)
                {
                    dp[i][j] = min(1 + dp[i][j - w[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][s] == INT_MAX - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dp[n][s] << endl;
        }
    }

    return 0;
}