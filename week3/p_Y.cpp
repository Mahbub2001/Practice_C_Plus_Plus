#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
const int mod = 998244353;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long A, B, C;
    cin >> A >> B >> C;
    long long first = ((A * (A + 1)) / 2) % mod;
    long long second = ((B * (B + 1)) / 2) % mod;
    long long third = ((C * (C + 1)) / 2) % mod;
    cout << (((first * second) % mod) * third) % mod << endl;

    return 0;
}