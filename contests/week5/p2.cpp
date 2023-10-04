#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fill_number(x, n) setfill('0') << setw(n) << (x)
template <typename T>
T lcm(T a, T b)
{
    return (a * (b / __gcd(a, b)));
}
const long long MAX_N = 1e5+5;
// const long long N = 2e7;
// bool is_prime[N + 1];
// vector<long long> primes;

// void sieve()
// {
//     fill(is_prime, is_prime + N + 1, true);
//     is_prime[0] = is_prime[1] = false;

//     for (long long i = 2; i * i <= N; i++)
//     {
//         if (is_prime[i])
//         {
//             for (long long j = i * i; j <= N; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }

//     for (long long i = 2; i <= N; i++)
//     {
//         if (is_prime[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, q;
    cin >> n >> k >> q;

    long long arr[MAX_N] = {0};

    for (int i = 0; i < n; i++)
    {
        long long l, r;
        cin >> l >> r;
        arr[l]++;
        arr[r + 1]--;
    }

    long long pre[MAX_N] = {0};
    pre[0] = arr[0];

    for (int i = 1; i < MAX_N; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }

    int count = 0;

    for (int i = 0; i < MAX_N; i++)
    {
        if (pre[i] >= k)
        {
            count++;
        }
        pre[i] = count;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
    return 0;
}
