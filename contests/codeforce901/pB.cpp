#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define max(x, y) x >= y ? x : y
#define min(x, y) x <= y ? x : y
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

        long long n, m, k;
        long long sum = 0;
        cin >> n >> m >> k;
        vector<int> v1(n);
        vector<int> v2(m);


        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            sum += v1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> v2[i];
        }


        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());


        
        if (k == 1)
        {
            if (v1[0] >= v2[m - 1])
            {
                cout << sum << endl;
            }
            else
            {
                sum = sum - v1[0] + v2[m - 1];
                cout << sum << endl;
            }
        }
        else if (k == 2)
        {
            if (v1[0] < v2[m - 1])
            {
                sum -= (v1[0] + v2[m - 1]);
                sum += (v2[0] = max(v2[m - 1], v1[n - 1]));
                cout << sum << endl;
            }
            else
            {
                cout << sum - v1[n - 1] + v2[0] << endl;
            }
        }
        else
        {
            long long res = 0;
            if (v1[0] < v2[m - 1])
            {
                sum -= (v1[0] + v2[m - 1]);
                res = sum;
                sum += (min(v1[0], v2[0]) - max(v2[m - 1], v1[n - 1]));
            }
            else
            {
                sum -= (v1[n - 1] + v2[0]);
            }
            k -= 2;
            if (k % 2 == 1)
            {
                cout << res << endl;
            }
            else
            {
                cout << sum << endl;
            }
        }
    }

    return 0;
}
