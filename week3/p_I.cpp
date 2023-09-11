#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, k;
    cin >> n >> k;
    vector<long long> v;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    if (k <= v.size())
    {
        cout << v[k - 1] << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int n,k,i;
//     cin>>n>>k;
//     set <long long> a;
//     for (i= 1; i<= sqrt(n); i++)
//     {
//         if (n%i == 0)
//         {
//             a.insert({i, n/i});
//         }
//     }
//     if (k > a.size()) {cout<<-1<<endl;}
//     else
//     {
//         long long int y = *next(a.begin(), k-1);
//         cout<<y;
//     }
 
// }
 