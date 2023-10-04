#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
const int N = 1e5 + 5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, ans = 0;
    cin >> n;
    vector<long long> b(31);
    map<long long, long long> mp;
    long long *freq = new long long[n];

    b[0] = 1;
    for (int i = 1; i <= 30; i++)
    {
        b[i] = b[i - 1] * 2;
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> freq[i];
        mp[freq[i]]++;
    }
    for (long long i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j <= 30; j++)
        {
            if (mp.count(b[j] - freq[i]) > 0)
            {
                int l = mp[b[j] - freq[i]];
                if (freq[i] != b[j] - freq[i] || l > 1)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            ans++;
        }
    }
    delete[] freq;

    cout << ans<<endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     map<int, int> p;
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i], p[a[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (!--p[a[i]])
//         {
//             p.erase(a[i]);
//         }
//         bool flag = 0;
//         for (int j = 0; j <= 30; j++)
//         {
//             if ((1 << j) > a[i] && p.count((1 << j) - a[i]))
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         ans += flag;
//         p[a[i]]++;
//     }
//     cout << n - ans << endl;

//     return 0;
// }