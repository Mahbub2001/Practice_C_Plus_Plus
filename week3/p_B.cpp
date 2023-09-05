#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

int detect(int t)
{
    bool flag = false;
    if (t == 1)
        return 1;
    for (int i = 2; i * i <= t; i++)
    {
        if (t % i == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        int f = t;
        string str = to_string(f);
        reverse(str.begin(), str.end());
        int num = stoi(str);
        if (num == t)
        {
            return 0;
        }

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        return 2;
    }
    else
    {
        return 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    while (cin >> t)
    {
        int result = detect(t);
        if (result == 0)
        {
            cout << t << " "
                 << "is prime." << endl;
        }
        else if (result == 1)
        {
            cout << t << " "
                 << "is not prime." << endl;
        }
        else if (result == 2)
        {
            cout << t << " "
                 << "is emirp." << endl;
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";

// bool is_prime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int reverse_number(int n)
// {
//     int rev = 0;
//     while (n > 0)
//     {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }
//     return rev;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n;
//     while (cin >> n)
//     {
//         if (is_prime(n))
//         {
//             int rev = reverse_number(n);
//             if (n != rev && is_prime(rev))
//             {
//                 cout << n << " is emirp." << endl;
//             }
//             else
//             {
//                 cout << n << " is prime." << endl;
//             }
//         }
//         else
//         {
//             cout << n << " is not prime." << endl;
//         }
//     }

//     return 0;
// }
