#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    bool flag = true;

    int dgt = n % 10;
    n /= 10;

    while (n > 0)
    {
        int cur = n % 10;
        if (cur <= dgt)
        {
            flag =  false;
        }
        dgt = cur;
        n /= 10;
    }

    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}