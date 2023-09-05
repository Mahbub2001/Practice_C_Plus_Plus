#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mn = min(mn,abs(x));
    }
    cout<<mn<<endl;
    
    return 0;
}