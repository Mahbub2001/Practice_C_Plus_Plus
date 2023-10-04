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

int check(const string &S)
{
    for (int i = 0; i < S.length() - 2; ++i)
    {
        if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    string S;
    cin >> N >> S;

    cout << check(S) << endl;

    return 0;
}
