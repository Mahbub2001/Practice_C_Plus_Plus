#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    int l, r;
    cin >> l >> r;
    if ((l + r) % 2 == 0)
    {
        bool found = true;
        int a = (l + r) / 2 + 1;
        int b = (l + r) / 2 - 1;
        while (true)
        {
            if (__gcd(a, b) != 1)
            {
                found = true;
                break;
            }
            a += 1;
            b -= 1;
            if (a > (l + r) || b <= 0)
            {
                found = false;
                break;
            }
        }

        if (found == false)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
    else
    {
        bool found = true;
        int sum = l+r;

        int a = sum;
        int b = 1;
       
        while(true){

        }
        
        if (found == false)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
    // }

    return 0;
}