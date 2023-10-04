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

    bool isPrefix = false, isSuffix = false;
    int N, M;
    string s1, s2;
    cin >> N >> M >> s1 >> s2;

    for (size_t i = 0; i < N; i++)
    {
        if (s1[i] != s2[i])
        {
            isPrefix = true;
        }
    }
    int l = s2.size() - N;

    for (size_t i = 0; i < N; i++)
    {

        if (s1[i] != s2[l])
        {
            isSuffix = true;
        }
        l++;
    }
    if (!isPrefix && !isSuffix)
    {
        cout << 0 << endl;
    }
    else if (!isPrefix && isSuffix)
    {
        cout << 1 << endl;
    }
    else if (isPrefix && !isSuffix)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }

    return 0;
}
