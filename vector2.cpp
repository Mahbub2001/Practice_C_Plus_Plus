#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<long long int>A;
    for (int i = 0; i < N; i++)
    {
        long long int x;
        cin >> x;
        A.push_back(x);
    }
    for (int i = N-1; i >= 0; i--)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}