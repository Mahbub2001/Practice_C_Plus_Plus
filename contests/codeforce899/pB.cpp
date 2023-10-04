// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"

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
//         vector<unordered_map<int, int>> v;
//         unordered_map<int, int> mp1;
//         for (int i = 0; i < n; i++)
//         {
//             int k, x;
//             cin >> k;
//             unordered_map<int, int> a;
//             for (int j = 0; j < k; j++)
//             {
//                 cin >> x;
//                 mp1[x]++;
//                 a[x]++;
//             }
//             v.push_back(a);
//         }
//         int ans = 0;
//         for (int i = 1; i <= 50; i++)
//         {
//             vector<unordered_map<int, int>> v2;
//             for (int j = 0; j < n; j++)
//             {
//                 if (v[j].find(i) == v[j].end())
//                 {
//                     v2.push_back(v[j]);
//                 }
//             }
//             unordered_map<int, int> mp;
//             for (int j = 0; j < v2.size(); j++)
//             {
//                 for (auto val : v2[j])
//                 {
//                     mp[val.first]++;
//                 }
//             }
//             if (mp.size() != mp1.size())
//             {
//                 int sz = mp.size();
//                 ans = max(ans, sz);
//             }
//         }
//         cout << ans << endl;
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
        int n;
        cin >> n;
        set<int> st;
        set<int> v[n];

        for (int i = 0; i < n; ++i)
        {
            int k;
            cin >> k;
            while (k--)
            {
                int a;
                cin >> a;
                v[i].insert(a);
                st.insert(a);
            }
        }

        int ans = INT_MIN;

        for (auto val : st)
        {
            set<int> cur_st;
            for (int i = 0; i < n; ++i)
            {
                if (v[i].find(val) == v[i].end())
                {
                    cur_st.insert(v[i].begin(), v[i].end());
                }
                ans = max(ans, (int)cur_st.size());
            }
        }
        cout << ans << endl;
    }

    return 0;
}