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

    int i = 0, sum = 0;
    while (true)
    {
        if (sum >= n)
        {
            break;
        }
        sum += i;
        i++;
    }
    cout << i - 1 << endl;

    return 0;
}