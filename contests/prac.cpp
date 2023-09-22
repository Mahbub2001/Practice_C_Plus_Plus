// 1
//  #include <bits/stdc++.h>
//  using namespace std;
//  #define endl "\n";
//  int main()
//  {
//      ios_base::sync_with_stdio(false);
//      cin.tie(0);
//      cout.tie(0);

//     int count = 0;
//     string s;
//     cin >> s;
//     for (char ch : s)
//     {
//         if (ch == '+')
//         {
//             count++;
//         }
//         else
//         {
//             count--;
//         }
//     }
//     cout << count << endl;

//     return 0;
// }

// 2
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     long long n;
//     cin >> n;

//     long long count = 0;
//     long long temp = n;
//     while (temp != 0)
//     {
//         count += temp % 10;
//         temp = temp / 10;
//     }
//     if (n % count == 0)
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }

//     return 0;
// }

// 3
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n;
//     string a, b;
//     cin >> n >> a >> b;
//     int count = 0, diff;
//     for (int i = 0; i < n; i++)
//     {
//         diff = abs(a[i] - b[i]);
//         if (diff >= 6)
//             diff = 10 - diff;
//         count = count + diff;
//     }

//     cout << count << endl;

//     return 0;
// }

// 4
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     long long n, temp = 0;
//     cin >> n;
//     for (int i = 2; i <= n; i++)
//     {
//         if ((n / i) == n % i)
//         {
//             temp++;
//         }
//     }
//     cout << temp << endl;

//     return 0;
// }

// 5
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

//         cout << n << " ";
//         for (int i = 1; i < n; i++)
//             cout << i << " ";

//         cout << endl;
//     }

//     return 0;
// }

//6
