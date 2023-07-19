// #include <bits/stdc++.h>
// using namespace std;

// void insert_heap(vector<int> &v, int x)
// {
//     v.push_back(x);

//     int cur_idx = v.size() - 1;
//     while (cur_idx != 0)
//     {
//         int parent_idx = (cur_idx - 1) / 2;
//         if (v[parent_idx] > v[cur_idx])
//         {
//             swap(v[parent_idx], v[cur_idx]);
//         }
//         else
//         {
//             break;
//         }
//         cur_idx = parent_idx;
//     }
// }

// void delete_heap(vector<int> &v)
// {
//     v[0] = v[v.size() - 1];
//     v.pop_back();
//     int cur = 0;
//     while (true)
//     {
//         int left_idx = cur * 2 + 1;
//         int right_idx = cur * 2 + 2;
//         int last_idx = v.size() - 1;

//         if (left_idx <= last_idx && right_idx <= last_idx)
//         {
//             // duitai ase
//             if (v[left_idx] <= v[right_idx] && v[left_idx] < v[cur])
//             {
//                 swap(v[left_idx], v[cur]);
//                 cur = left_idx;
//             }
//             else if (v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
//             {
//                 swap(v[right_idx], v[cur]);
//                 cur = right_idx;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         else if (left_idx <= last_idx)
//         {
//             // left ase sudhu
//             if (v[left_idx] < v[cur])
//             {
//                 swap(v[left_idx], v[cur]);
//                 cur = left_idx;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         else if (right_idx <= last_idx)
//         {
//             // right ase sudhu
//             if (v[right_idx] < v[cur])
//             {
//                 swap(v[right_idx], v[cur]);
//                 cur = right_idx;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         else
//         {
//             break;
//         }
//     }
// }

// void print_heap(vector<int> &v)
// {
//     for (int val : v)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     vector<int> v;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         insert_heap(v, x);
//     }
//     print_heap(v);
//     delete_heap(v);
//     print_heap(v);
//     delete_heap(v);
//     print_heap(v);

//     return 0;
// }

// ekta delete log(n);

#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
public:
    vector<int> v;
    MinHeap()
    {
    }

    void up_heapify(int idx)
    {
        while (0 < idx && v[idx] < v[(idx - 1) / 2])
        {
            swap(v[idx], v[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    // O(logn)
    void push(int val)
    {
        v.push_back(val);
        up_heapify(v.size() - 1);
    }

    void printHeap()
    {
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    void down_heapify(int idx)
    {
        while (true)
        {
            int smallest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if (l < v.size() && v[smallest] > v[l])
            {
                smallest = l;
            }
            if (r < v.size() && v[smallest] > v[r])
            {
                smallest = r;
            }
            if (smallest == idx)
                break;

            swap(v[idx], v[smallest]);
            idx = smallest;
        }
    }

    // O(logn)
    void pop(int idx)
    {
        swap(v[idx], v[v.size() - 1]);
        v.pop_back();
        down_heapify(idx);
    }

    // O(1)
    int getMin()
    {
        return v[0];
    }

    // O(n)
    void buildHeapFromArray(vector<int> &arr)
    {
        v = arr;
        int n = v.size();
        int lastNonLeafNode = n / 2 - 1;

        for (int i = lastNonLeafNode; i >= 0; i--)
        {
            down_heapify(i);
        }
    }
};

int main()
{
    MinHeap mn;

    mn.push(5);
    mn.push(4);
    mn.push(3);
    mn.push(2);
    mn.push(1);

    mn.printHeap();

    mn.pop(0);
    mn.printHeap();

    cout << mn.getMin() << endl;

    vector<int> arr = {100, 42, 23, 21, 1};
    mn.buildHeapFromArray(arr);
    mn.printHeap();

    return 0;
}
