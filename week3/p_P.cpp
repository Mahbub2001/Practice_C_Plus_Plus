#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c = 0;
    cin >> a >> b;
    while (a <= b)
    {
        c++;
        a *= 3;
        b *= 2;
    }
    cout << c << endl;

    return 0;
}