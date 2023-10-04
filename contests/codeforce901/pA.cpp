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
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> v(n, 0);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long sum = b - 1;
        b = 1;
        for (long long i = 0; i < n; i++)
        {
            b += v[i];
            b = min(b, a);
            sum += b - 1;
            b = 1;
        }
        cout<<sum + 1<< endl;
    }

    return 0;
}
