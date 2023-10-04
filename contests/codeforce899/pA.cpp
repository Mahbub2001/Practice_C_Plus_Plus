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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int result = 1;
        for(int i = 0; i < n; i++){
            if(a[i] == result){
                result=a[i]+1;
            }
            if(i==n-1){
                break;
            }
            result++;
        }
        cout<<result<<endl;
    }

    return 0;
}