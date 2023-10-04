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
    map<string, int> mp;
    while (n--)
    {
        string str;
        cin >> str;
        int a = mp[str]++;
        if (a == 0)
        {
            cout << "OK"<<endl;
        }
        else
        {
            cout << str << a << endl;
        }
    }

    return 0;
}