// #include <bits/stdc++.h>
// using namespace std;
// class Greater
// {
// public:
//     bool operator()(long long a, long long b)const
//     {
//         return a > b;
//     }
// };

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N;
//         cin >> N;
//         list<long long> A;
//         for (int i = 0; i < N; i++)
//         {
//             int X;
//             cin >> X;
//             A.push_back(X);
//         }
//         set<long long, Greater> s(A.begin(), A.end());

//         for (long long val : s)
//         {
//             cout << val << " ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// pair<string, int> find(const string &S)
// {
//     istringstream ss(S);
//     map<string, int> word_count;
//     string word;
//     string max_word;


//     int count = 0;
//     while (ss >> word)
//     {
//         word_count[word]++;
//         if (word_count[word] > count)
//         {
//             count = word_count[word];
//             max_word = word;
//         }
//     }

//     return make_pair(max_word, count);
// }

// int main()
// {
//     int T;
//     cin >> T;
//     cin.ignore();
//     while (T--)
//     {
//         string S;
//         getline(cin, S);
//         pair<string, int> result = find(S);
//         cout << result.first << " " << result.second << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<long long> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        priority_queue<pair<long long, int>> pq;
        map<long long, int> mp;

        for (long long val : v)
        {
            mp[val]++;
        }
        int count = 0;
        for (auto val : mp)
        {
            if (val.second > count)
            {
                while (!pq.empty())
                {
                    pq.pop();
                }
                pq.push({val.first, val.second});
                count = val.second;
            }
            else if (val.second == count)
            {
                pq.push({val.first, val.second});
            }
        }
        cout << pq.top().first << " " << pq.top().second << endl;
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N, Q;
//     cin >> N;
//     priority_queue<long long, vector<long long>, greater<>> pq;

//     for (int i = 0; i < N; ++i)
//     {
//         int x;
//         cin >> x;
//         pq.push(x);
//     }
//     cin >> Q;
//     while (Q--)
//     {
//         int choice;
//         cin >> choice;

//         if (choice == 0)
//         {
//             int X;
//             cin >> X;
//             pq.push(X);
//             cout << pq.top() << endl;
//         }
//         else if (choice == 1)
//         {
//             if (!pq.empty())
//             {
//                 cout << pq.top() << endl;
//             }
//             else
//             {
//                 cout << "Empty" << endl;
//             }
//         }
//         else if (choice == 2)
//         {
//             if (!pq.empty())
//             {
//                 pq.pop();
//                 if (!pq.empty())
//                 {
//                     cout << pq.top() << endl;
//                 }
//                 else
//                 {
//                     cout << "Empty" << endl;
//                 }
//             }
//             else
//             {
//                 cout << "Empty" << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;
//     int marks;

//     Student(string name, int roll, int marks)
//     {
//         this->marks = marks;
//         this->roll = roll;
//         this->name = name;
//     }
// };

// class cmp
// {
// public:
//     bool operator()(Student a, Student b)
//     {
//         if (a.marks < b.marks)
//             return true;
//         else if (a.marks > b.marks)
//             return false;
//         else
//         {
//             if (a.roll > b.roll)
//                 return true;
//             else
//                 return false;
//         }
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;
//     priority_queue<Student, vector<Student>, cmp> pq;
//     for (int i = 0; i < n; i++)
//     {
//         string name;
//         int roll, marks;
//         cin >> name >> roll >> marks;
//         Student obj(name, roll, marks);
//         pq.push(obj);
//     }

//     int Q;
//     cin >> Q;
//     while (Q--)
//     {
//         int choice;
//         cin >> choice;
//         if (choice == 0)
//         {
//             string name;
//             int roll, marks;
//             cin >> name >> roll >> marks;
//             Student obj(name, roll, marks);
//             pq.push(obj);
//             cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
//         }
//         else if (choice == 1)
//         {
//             if (!pq.empty())
//             {
//                 cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
//             }
//             else
//             {
//                 cout << "Empty" << endl;
//             }
//         }
//         else if (choice == 2)
//         {
//             if (!pq.empty())
//             {
//                 pq.pop();
//                 if (!pq.empty())
//                 {
//                     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
//                 }
//                 else
//                 {
//                     cout << "Empty" << endl;
//                 }
//             }
//             else
//             {
//                 cout << "Empty" << endl;
//             }
//         }
//     }

//     return 0;
// }
