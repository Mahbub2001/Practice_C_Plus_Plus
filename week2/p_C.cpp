#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

int camelcase(string &s){
    int count = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    cout<<camelcase(s)<<endl;
    
    return 0;
}