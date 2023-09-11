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
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> v;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             v.push_back({x, i});
//         }
//         sort(v.begin(), v.end());
//         int temp = n;
//         for (int i = 0; i < n; i++)
//         {
//             v[i].first = temp;
//             temp--;
//         }
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             arr[v[i].second] = v[i].first;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
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
        string s;
        cin >> n;
        cin >> s;
        vector<int> final_string(n + 1);

        int count = 0, l = 0, r = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                count++;
            }
            if (s[i] == s[j] && s[i] == '0')
            {
                l++;
            }
            else if ((s[i] == s[j]) && (s[i] == '1'))
            {
                r++;
            }
            i++;
            j--;
        }
        if (count == 0)
        {
            final_string[0] = 1;
        }
        int f = 0;
        if (n & 1)
            f = 1;
        for (int i = 1; i <= n; i++)
        {
            if (count == i)
                continue;
            int x = i - count;
            if ((x > (l * 2 + r * 2) + f))
                continue;
            if (x & 1)
            {
                if (n % 2 == 0)
                    continue;
                else
                    final_string[i] = 1;
            }
            else
            {
                final_string[i] = 1;
            }
        }
        string str;
        for (int i = 0; i <= n; i++)
        {
            str.push_back((final_string[i] + '0'));
        }
        cout << str << endl;
    }

    return 0;
}