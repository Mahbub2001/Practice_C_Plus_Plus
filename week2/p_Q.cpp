#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    string s;
    cin >> t;
    getchar();
    while (t--)
    {
        getchar();
        int index[5000], n = 1, i = 1;
        string x[5000];
        getline(cin, s);
        stringstream ss;
        ss << s;
        while (ss >> index[n])
            n++;
        getline(cin, s);
        ss.clear();
        while (ss >> x[index[i]])
            i++;
        for (int i = 1; i < n; i++)
            cout << x[i] << endl;
        if (t)
            puts("");
    }

    return 0;
}