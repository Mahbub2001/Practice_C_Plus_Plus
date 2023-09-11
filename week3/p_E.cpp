#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

bool detect(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (detect(n - 2))
    {
        cout << 2 << " " << n - 2 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}