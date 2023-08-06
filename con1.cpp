// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         map<int, int> p;
//         for (int i = 0; i < N; i++) {
//             int pearl_code;
//             cin >> pearl_code;
//             p[pearl_code]++;
//         }
//         for ( auto it : p) {
//             if (it.second % 2 != 0) {
//                 cout << it.first << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string S;
//     while (getline(cin, S))
//     {
//         S.erase(remove_if(S.begin(), S.end(), ::isspace), S.end());
//         stringstream ss(S);
//         string word, output_word;
//         while (ss >> word)
//         {
//             sort(word.begin(), word.end());
//             output_word += word;
//         }
//         cout << output_word << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N,moves =0;
//         cin >> N;
//         vector<int> A(N);
//         map<int, int> mp;
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//             mp[A[i]]++;
//         }

//         for (auto it : mp) {
//             if (it.second > 1) {
//                 moves += (it.second - 1);
//             }
//         }

//         cout << moves << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         string S;
//         cin >> S;
//         stack<char> st;
//         for (char c : S)
//         {
//             st.push(c);
//         }
//         int count = 0;
//         int member = -1;
//         while (!st.empty())
//         {
//             char m = st.top();
//             if (m == '1')
//             {
//                 if (member == -1)
//                     count++;
//             }
//             else if(m == '0')
//             {
//                 if (member == -1)
//                 {
//                     member = -2;
//                 }
//                 else if (member == -2)
//                 {
//                     member = -1;
//                 }
//             }
//             st.pop();
//         }
//         cout << count << endl;
//     }

//     return 0;
// }

/**
 * This C++ program takes an input string and parses it to extract alphanumeric characters and numbers,
 * and then concatenates them based on the count specified by the numbers and the operators specified
 * by the symbols '+' '-' '*' '/'.
 *
 * @return The main function returns an integer value of 0.
 */
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string input;
//     cin >> input;
//     string result;
//     string str;
//     int count = 0;

//     for (char ch : input)
//     {
//         if (isdigit(ch))
//         {
//             count = count * 10 + (ch - '0');
//         }
//         else if (isalpha(ch))
//         {
//             str += ch;
//         }
//         else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//         {
//             while (count > 0)
//             {
//                 result += str;
//                 count--;
//             }
//             str = "";
//             result += ch;
//         }
//     }
//     while (count > 0)
//     {
//         result += str;
//         count--;
//     }

//     cout << result << endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int Y;
//     cin >> Y;
//     if (Y == 1)
//     {
//         cout << 1 << endl;
//     }
//     else
//     {
//         cout << (pow(2, (Y - 1))) * (pow(2, (Y - 2)));
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string s;
//         cin >> s;
//         vector<int> v;
//         int c = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == '0')
//             {
//                 if (c > 0)
//                 {
//                     v.push_back(c);
//                     c = 0;
//                 }
//             }
//             else
//                 c++;
//         }
//         if (c > 0)
//             v.push_back(c);
//         sort(v.rbegin(), v.rend());

//         int count = 0;
//         for (int i = 0; i < v.size(); i += 2)
//         {
//             count += v[i];
//         }
//         cout << count << endl;
//     }
// }

/*
codeforces 1850
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T = 1;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long current = 1, count = 0;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) <= k)
                current++;
            else
            {
                count = max(count, current);
                current = 1;
            }
        }

        count = max(count, current);

        cout << n - count << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        vector<long long> v1(n);
        map<long long, long long> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            mp[v1[i]]++;
        }

        vector<long long> v2(n + 1);

        for (auto it : mp)
        {
            for (int i = it.first; i < n + 1; i += it.first)
            {
                v2[i] += it.second;
            }
        }
        cout << *max_element(v2.begin(), v2.end()) << endl;
    }
}
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k,l = 1, r = 1;
        cin >> n >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int sm = 0;
            for (int i = 0; i < n; ++i)
            {
                sm += (a[i] + 2 * mid) * (a[i] + 2 * mid);
                if (sm > k)
                    break;
            }
            if (sm == k)
            {
                cout << mid << endl;
                return 0;
            }
            if (sm > k)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return 0;
}
*/
