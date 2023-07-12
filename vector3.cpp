// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     vector<int>A;

//     for (int i = 0; i < N; i++)
//     {
//         int x;
//         cin >> x;
//         A.push_back(x);
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (A[i] > 0)
//         {
//             replace(A.begin(), A.end(),A[i],1);
//         }
//         else if (A[i] < 0){
//             replace(A.begin(), A.end(),A[i],2);
//         }

//     }
//     for (int i = 0; i < N; i++)
//     {
//        cout << A[i] <<" ";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    transform(A.begin(), A.end(), A.begin(), [](int x)
              {
        if (x > 0)
        {
            return 1;
        }
        else if (x < 0)
        {
            return 2;
        }
        else
        {
            return x;
        } });

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
