#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    map<string,int>mp;
    cin>>t;
    while(t--){
        int x;
        string str;
        cin>>x>>str;
        if(x==1){
            int mrk;
            cin>>mrk;
            mp[str]+=mrk;
        }
        else if(x == 2){
            mp[str] = 0;
        }
        else{
            cout<<mp[str]<<endl;
        }
    }
    
    return 0;
}