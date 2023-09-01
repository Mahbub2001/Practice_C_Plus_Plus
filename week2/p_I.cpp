#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n;
    cin >> s;

    string v(10, '0');

    for (int i = 0; i < n; i++)
    {
      if(s[i]=='L')
        {
            v[v.find('0')]='1';
        }
        else if(s[i]=='R')
        {
            v[v.rfind('0')]='1';
        }
        else
        {
            v[s[i]-'0']='0';
        }
        
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << v[i];
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

//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     vector<int> v(10, 0);

//     for (int i = 0; i < n; ++i)
//     {
//         if (s[i] == 'L')
//         {
//             auto it = find(v.begin(), v.end(), 0);
//         }
//         else if (s[i] == 'R')
//         {
//             auto it = find(v.rbegin(), v.rend(), 0);
//         }
//         else
//         {
//         }
//     }

//     for (int i = 0; i < 10; ++i)
//     {
//         cout << v[i];
//     }

//     return 0;
// }