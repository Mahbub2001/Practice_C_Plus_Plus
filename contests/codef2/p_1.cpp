#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int result = 0;
        result = ((abs(a - b) + 1) / 2 + c - 1) / c;
        cout<<result<<endl;
    }

    return 0;
}