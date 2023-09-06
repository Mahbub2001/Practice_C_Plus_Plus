// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// typedef pair<int, int> pii;
// typedef pair<long long, long long> pll;
// const int N = 1e5 + 5;
// template <typename T>
// T gcd(T a, T b) { return (b ? __gcd(a, b) : a); }
// template <typename T>
// T lcm(T a, T b) { return (a * (b / gcd(a, b))); }

// bool vv[N];

// bool detect(vector<long long> &v, int n, long long x, long long sum)
// {
//     if (n == -1)
//     {
//         return sum == x;
//     }
//     if (vv[n])
//     {
//         return vv[n];
//     }
//     bool opt1 = detect(v, n - 1, x, sum + v[n]);
//     bool opt2 = detect(v, n - 1, x, sum - v[n]);
//     return vv[n] = opt1 || opt2;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int N;
//     long long X;
//     cin >> N >> X;
//     vector<long long> v(N);

//     for (int i = 0; i < N; i++)
//     {
//         cin >> v[i];
//     }
//     for (int i = 0; i < N; i++)
//     {
//         vv[i] = false;
//     }

//     if (detect(v, N, X, 0))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

bool dp[N];

bool check(const vector<int> &arr, int sz, int result, int sum, int index)
{
    if (index == sz)
    {
        return sum == result;
    }
    if (dp[index])
    {
        return dp[index];
    }

    bool opt1 = check(arr, sz, result, sum + arr[index], index + 1);
    bool opt2 = check(arr, sz, result, sum - arr[index], index + 1);

    return dp[index] = opt1 || opt2;
}

int main()
{
    int sz, result;
    cin >> sz >> result;

    vector<int> arr(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < sz; i++)
    {
        dp[i] = false;
    }

    int flag = check(arr, sz, result, arr[0], 1);

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
