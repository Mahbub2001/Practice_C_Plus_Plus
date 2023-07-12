#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A;
    //vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
        //A[i] = x;
    }
    sort(A.begin(), A.end());
    while (Q--)
    {
        int X;
        cin >> X;

        int L = 0;
        int R = N-1;
        bool flag = false;

        while (L <= R)
        {
            int mid = (L + R) / 2;
            if (A[mid] == X)
            {
                flag = true;
                break;
            }
            if (X > A[mid])
            {
                L = mid + 1;
            }
            else
            {
                R = mid - 1;
            }
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}