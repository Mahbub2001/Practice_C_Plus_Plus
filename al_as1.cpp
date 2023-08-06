// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &v, int l, int r, int mid)
// {
//     int left_side = mid - l + 1;
//     int L[left_side + 1];

//     int right_side = r - mid;
//     int R[right_side + 1];

//     for (int i = l, j = 0; i <= mid; i++, j++)
//     {
//         L[j] = v[i];
//     }

//     for (int i = mid + 1, j = 0; i <= r; i++, j++)
//     {
//         R[j] = v[i];
//     }
//     L[left_side] = INT_MIN;
//     R[right_side] = INT_MIN;

//     int lp = 0, rp = 0;
//     for (int i = l; i <= r; i++)
//     {
//         if (L[lp] >= R[rp])
//         {
//             v[i] = L[lp];
//             lp++;
//         }
//         else
//         {
//             v[i] = R[rp];
//             rp++;
//         }
//     }
// }

// void mergesort(vector<int> &v, int l, int r)
// {
//     if (l == r)
//         return;
//     int mid = (l + r) / 2;
//     mergesort(v, l, mid);
//     mergesort(v, mid + 1, r);
//     merge(v, l, r, mid);
// }

// int main()
// {

//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     mergesort(v, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int b_search(const vector<int> &v, int value)
// {
//     int l = 0;
//     int r = v.size() - 1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (v[mid] == value)
//         {
//             return mid;
//         }
//         else if (v[mid] < value)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n, k;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     cout << "Enter the value that you want to search: " << endl;
//     cin >> k;
//     int index = b_search(v, k);
//     if (index != -1)
//     {
//         cout << "Found at index: " << index << endl;
//     }
//     else
//     {
//         cout << "Not Found" << endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// void check(vector<int> &v, int k)
// {
//     int L = 0;
//     int R = v.size() - 1;
//     bool flag = false;
//     while (L <= R)
//     {
//         int mid = (L + R) / 2;
//         if (v[mid] == k)
//         {
//             if (v[mid] == v[mid + 1])
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (k > v[mid])
//         {
//             L = mid + 1;
//         }
//         else
//         {
//             R = mid - 1;
//         }
//     }
//     if (flag)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int k;
//     cin >> k;
//     check(v, k);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int l, int mid, int r)
{
    int left_side = mid - l + 1;
    int L[left_side + 1];

    int right_side = r - mid;
    int R[right_side + 1];

    for (int i = l, j = 0; i <= mid; i++, j++)
    {
        L[j] = v[i];
    }

    for (int i = mid + 1, j = 0; i <= r; i++, j++)
    {
        R[j] = v[i];
    }
    L[left_side] = INT_MIN;
    R[right_side] = INT_MIN;

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[lp] >= R[rp])
        {
            v[i] = L[lp];
            lp++;
        }
        else
        {
            v[i] = R[rp];
            rp++;
        }
    }
}

void mergeSort(vector<int> &v, int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(v, l, mid);
    mergeSort(v, mid + 1, r);
    merge(v, l, mid, r);
}

int main()
{
    int n1;
    cin >> n1;

    vector<int> v1(n1);

    for (int i = 0; i < n1; i++)
        cin >> v1[i];

    int n2;
    cin >> n2;
    vector<int> v2(n2);

    for (int i = 0; i < n2; i++)
        cin >> v2[i];

    mergeSort(v1, 0, n1 - 1);
    mergeSort(v2, 0, n2 - 1);

    vector<int> v3;
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (v1[i] >= v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
        else
        {
            v3.push_back(v2[j]);
            j++;
        }
    }

    while (i < n1)
    {
        v3.push_back(v1[i]);
        i++;
    }

    while (j < n2)
    {
        v3.push_back(v2[j]);
        j++;
    }

    for (auto val : v3)
    {
        cout << val << " ";
    }

    return 0;
}
