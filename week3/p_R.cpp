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
        int n;
        cin >> n;
        vector<int> v;
        int i = 0,  f = 1,num;
        while (n)
        {
            int l = n % 10;
            if (l > 0)
            {
                num = l * f;
                v.push_back(num);
            }
 
            n = n / 10;
            i++;
            f = f * 10;
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}