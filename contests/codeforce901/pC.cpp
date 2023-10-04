#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
template <typename T>
T lcm(T a, T b)
{
    return (a * (b / __gcd(a, b)));
}

const long long N = 2e7;
bool is_prime[N + 1];
vector<long long> primes;

void sieve()
{
    fill(is_prime, is_prime + N + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (long long i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (long long j = i * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (long long i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        m -= ((m / n) * n);
        if (m)
        {
            int gcd = __gcd(n, m);
            n /= gcd;
            m = m / gcd;
            bool flag = false;

            if (__builtin_popcountll(n) != 1)
            {
                flag = true;
            }
            if (flag)
            {
                cout << -1 << endl;
                continue;
            }
            vector<int> v1;
            int result = 0;
            bitset<64> bits(m);
            for (int i = 0; i < 64; i++)
            {
                if (bits[i])
                {
                    v1.push_back(pow(2, i));
                }
            }
            for (auto val : v1)
            {
                result += (n / val - 1) * val;
            }
            cout << result * gcd << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
