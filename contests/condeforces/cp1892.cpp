// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";

// constexpr int N = 10000;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int row, col;
//         cin >> row >> col;

//         vector<string> v;

//         for (int i = 0; i < row; i++)
//         {
//             string s;
//             cin >> s;
//             v.push_back(s);
//         }

//         int count = 0;
//         string p = "vika";
//         int ind = 0;
//         int counts = 0;

//         for (int i = 0; i < col; i++)
//         {
//             for (int j = 0; j < row; j++)
//             {
//                 string s = v[j];
//                 char c = s[i];
//                 if (c == p[ind])
//                 {
//                     ind++;
//                     counts++;
//                     break;
//                 }
//             }
//             if (counts == 4)
//                 break;
//         }

//         if (counts == 4)
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
//         vector<int> arr(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         string ans;
//         ans += to_string(arr[0]) + " ";

//         int prev = arr[0];
//         int count = 1;

//         for (int i = 1; i < n; i++)
//         {
//             int next = arr[i];

//             if (prev <= next)
//             {
//                 ans += to_string(next) + " ";
//                 prev = next;
//                 count++;
//             }
//             else
//             {
//                 ans += to_string(next) + " " + to_string(next) + " ";
//                 prev = next;
//                 count += 2;
//             }
//         }

//         cout << count << endl;
//         cout << ans << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

long long int binarysearch(long long int n)
{
    long long int ll = 1, mm = INT_MAX, mid, ans = 1;
    while (ll <= mm)
    {
        mid = (ll + mm) / 2;
        long long int l = mid * (mid - 1) / 2;
        if (l == n)
        {
            return mid;
        }
        if (l < n)
        {
            ans = mid;
            ll = mid + 1;
        }
        else
        {
            mm = mid - 1;
        }
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int r = binarysearch(n);
        long int c = r * (r - 1) / 2;
        c = n - c;
        r += c;
        cout << r << endl;
    }

    return 0;
}