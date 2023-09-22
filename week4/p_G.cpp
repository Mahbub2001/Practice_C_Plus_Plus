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
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        int mn = 10; 
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < mn) {
                mn = v[i];
            }
        }
        
        long long prdct = 1;
        bool flag = false;
        
        for (int i = 0; i < n; i++) {
            if (!flag && v[i] == mn) {
                prdct *= (v[i] + 1);
                flag = true;
            }
            else {
                prdct *= v[i];
            }
        }
        
        cout << prdct << endl;
    }
    
    return 0;
}