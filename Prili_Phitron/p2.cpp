#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string w1, w2;
    while (cin >> w1 >> w2)
    {
        size_t i = 0, j = 0;
        while (i < w1.size() && j < w2.size())
        {
            if (w1[i] != w2[j])
            {
                i++;
            }
            else
            {
                i++;
                j++;
            }
        }
        if (j != w2.size())
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << "Possible" << endl;
        }
    }

    return 0;
}