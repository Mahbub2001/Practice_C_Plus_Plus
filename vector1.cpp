#include <bits/stdc++.h>
using namespace std;

void printl(vector<int> A, vector<int> B)
{
    vector<int> C;
    C = B;
    C.insert(C.end(), A.begin(), A.end());

    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }
}
int main()
{
    vector<int> A;
    vector<int> B;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        B.push_back(x);
    }
    printl(A, B);

    return 0;
}