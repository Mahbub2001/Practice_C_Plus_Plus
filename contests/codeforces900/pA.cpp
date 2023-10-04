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
        int n, k;
        cin >> n >> k;

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }

    return 0;
}