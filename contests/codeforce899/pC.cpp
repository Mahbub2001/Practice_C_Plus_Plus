#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
const int N = 2e5 + 5;
long long a[N], b[N];
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
        for (int i = 0; i <= n + 2; i++)
        {
            b[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] >= 0)
            {
                b[i] = b[i + 1] + a[i];
            }
            else
            {
                b[i] = b[i + 1];
            }
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum = max(sum, b[i + 1] + a[i]);
            }
            else
            {
                sum = max(sum, b[i + 1]);
            }
        }

        cout << sum << endl;
    }

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

//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int ans = 0;

//         vector<int>v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>v[i];
//         }
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if(v[i] >= 0){
//                 if(i%2 != 0){
//                     sum+=v[i];
//                 }
//             }
//         }
//         cout<<sum<<endl;

//     }

//     return 0;
// }