#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, l = 1;
    cin >> n;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            l *= i;
            while (n % i == 0)
                n /= i;
        }
    }
    cout << l * n;

    return 0;
}