#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    if (N == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            cout << i;
        }
        cout<<endl;
        for (int i = 2; i <= N; i++)
        {
            if (i != N)
            {
                cout << i;
                for (int i = 1; i <= N - 2; i++)
                {
                    cout << " ";
                }
                cout << N << endl;
            }
            else
            {
                for (int i = 1; i <= N; i++)
                {
                    cout << N;
                }
            }
        }
    }

    return 0;
}