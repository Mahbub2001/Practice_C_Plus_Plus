#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 1;

        for (int i = 1; i <= n; i++)
        {
            cout<<ans<<" ";
            ans+=2;
        }
        cout<<endl;
        
    }
    
    return 0;
}