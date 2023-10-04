#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
const int N = 1e5 + 5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        vector<long long int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        vector<long long int> temp = v;
        sort(temp.begin(), temp.end(), greater<int>());
        auto it1 = find(v.begin(), v.end(), temp[0]);
        auto it2 = find(v.begin(), v.end(), temp[1]);
        int d1 = distance(v.begin(), it1);
        int d2 = distance(v.begin(), it2);
        if (d1 < d2)
        {
            cout << d1 << " " << d2 << endl;
        }
        else
        {
            cout << d2 << " " << d1 << endl;
        }
    }

    return 0;
}