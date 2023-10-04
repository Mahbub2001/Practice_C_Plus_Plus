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

    int n;
    cin >> n;
    vector<int> x(n, 0);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        mx = max(mx, x[i]);
    }
    sieve();

    vector<int> v1(mx + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int num = x[i];
        int prev = 0;
        for (int val : primes)
        {
            if (val * val > num)
                break;
            if (num % val == 0)
            {
                while (num % val == 0)
                {
                    num /= val;
                }
                v1[val]++;
            }
        }
        if (num > 1 && num <= mx)
        {
            v1[num]++;
        }
    }
    for (int i = 1; i <= mx; i++)
    {
        v1[i] += v1[i - 1];
    }

    int m;
    cin >> m;
    int l, r;
    while (m--)
    {
        cin >> l >> r;
        if (l > mx)
        {
            cout << 0 << endl;
            continue;
        }
        if (r > mx)
        {
            r = mx;
        }
        cout << v1[r] - (l > 0 ? v1[l - 1] : 0) << endl;
    }

    return 0;
}
