#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    if (b > 0)
    {
        while (b--)
        {
            a = (a + 1) % n;
        }
        if (!a)
            a = n;
        cout << a;
    }
    else if (b < 0)
    {
        while (b++)
        {
            a = (a - 1);
            if (a == 0)
                a = n;
        }
        cout << a;
    }
    else
        cout << a;

    return 0;
}