#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000007;
long long result(long long x, long long y, long long n)
{
    if (y == 0)
        return 1;
    long long fac = result(x, y / 2, n);
    cout <<"...." <<fac << endl;
    fac = fac * fac % n;
    if (y % 2 == 1)
    {
        fac = fac * x % n;
    }
    return fac;
}
int main()
{
    int T;
    cin >> T;
    int i = 0;
    while (T--)
    {
        int n;
        cin >> n;
        cout << "Case #" << ++i << ": " << n * result(2, n - 1, MOD) % MOD << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n, m;
//     cin >> n >> m;

//     long long mx = (n - m + 1) * (n - m) / 2;
//     long long mn1 = n / m;
//     long long mn2 = mn1 + 1;
//     long long rem = n % m;
//     long long mn = (mn1 * (mn1 - 1) / 2) * (m - rem) + (mn2 * (mn2 - 1) / 2) * rem;

//     cout << mn << " " << mx << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int x, y, count = 0;
//         cin >> x >> y;
//         int total = (y - x) + 1;
//         for (int i = x; i <= y; i++)
//         {
//             string numberStr = to_string(i);
//             if (numberStr.find('0') != string::npos)
//             {
//                 count++;
//             }
//         }
//         cout << count << "/" << total << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int m = N / 2;
//     if (N % 2 == 0)
//     {
//         int n = m + 1;
//         m = m - 1;
//         while ((m % 2 == 0) && (n % 2 == 0))
//         {
//             m = m - 1;
//             n = n + 1;
//         }
//         cout << m << " " << n << endl;
//     }
//     else
//     {
//         cout << m << " " << N - m << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int c = n + n / 2;
//     cout <<c << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;

//     while (cin >> a >> b >> c)
//     {
//         if (a == 0 && b == 0 && c == 0)
//         {
//             break;
//         }
//         int triangle[3] = {a, b, c};
//         sort(triangle, triangle + 3);

//         if (triangle[0] * triangle[0] + triangle[1] * triangle[1] == triangle[2] * triangle[2])
//         {
//             cout << "right" << endl;
//         }
//         else
//         {
//             cout << "wrong" << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     vector<int> v;

//     int x = 0, y = 0, z = 0;
//     while (N--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         x += a;
//         y += b;
//         z += c;
//     }
//     if (x==0 && y==0 && z == 0)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }

// aq

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end(), greater<int>());

//     int gcd = v[0];
//     for (int i = 1; i < n; i++) {
//         int curr_gcd = __gcd(gcd, v[i]);
//         gcd = curr_gcd;
//     }
//     cout << gcd * n << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     vector<int> v(7);
//     for (int i = 0; i < 7; i++)
//     {
//         cin >> v[i];
//     }
//     int i = 0,l=1;
//     while(N > 0){
//         N=N-v[i];
//         if (i == 6) i=0;
//         else i++;
//         if(N>0 && l!=7) l++;
//         else if(N>0 && l== 7) l=1;
//     }
//     cout<<l<<endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     long long a, b, c;
//     while (cin >> a >> b)
//     {
//         c = a ^ b;
//         cout << c << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;

//         string colors;
//         cin >> colors;
//         int red = 0, green = 0, blue = 0;
//         for (char c : colors) {
//             if (c == 'R') {
//                 red++;
//             } else if (c == 'G') {
//                 green++;
//             } else if (c == 'B') {
//                 blue++;
//             }
//         }
//         int mx = max({red, green, blue});
//         cout << N-mx << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<long long>v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//        int x;
//        cin>>x;
//        v.push_back (x);
//     }
//     auto m = max_element(v.begin(), v.end());
//     long long sum =0;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=*m-v[i];
//     }
//     cout<<sum<<endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int count_binary(int num) {
//     bitset<16> binary(num);
//     int count = binary.count();
//     return count;
// }

// int main() {
//     int N;
//     cin >> N;

//     while (N--) {
//         int num;
//         cin >> num;

//         int bin = count_binary(num);
//         int hex = count_binary(stoi(to_string(num), nullptr, 16));

//         cout << bin << " " << hex << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<char, string> letterclass_ID{
//         {'B', "BattleShip"},
//         {'b', "BattleShip"},
//         {'C', "Cruiser"},
//         {'c', "Cruiser"},
//         {'D', "Destroyer"},
//         {'d', "Destroyer"},
//         {'F', "Frigate"},
//         {'f', "Frigate"}};

//     int T;
//     cin >> T;
//     while (T--)
//     {
//         char id;
//         cin >> id;
//         cout << letterclass_ID[id] << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int sm(int n) {
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

// int main() {

//     set<int> s;

//     for (int i = 1; i <= 1000000; i++) {
//         int nextNumber = i + sm(i);
//         s.insert(nextNumber);
//     }

//     for (int i = 1; i <= 1000000; i++) {
//         if (s.find(i) == s.end()) {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long N;
//     cin >> N;
//     long long reverse_number = 0;
//     int r;
//     while (N != 0)
//     {
//         r = N % 10;
//         reverse_number = reverse_number * 10 + r;
//         N /= 10;
//     }
//     cout << reverse_number << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s;
//     int Q;
//     cin >> Q;
//     while (Q--)
//     {
//         int q, X;
//         cin >> q >> X;

//         if (q == 1)
//         {
//             s.insert(X);
//         }
//         else if (q == 2)
//         {
//             s.erase(X);
//         }
//         else if (q == 3)
//         {
//             auto itr = s.find(X);
//             if (itr != s.end())
//             {
//                 cout << "Yes" << endl;
//             }
//             else
//             {
//                 cout << "No" << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<string, int> m;
//     int Q;
//     cin >> Q;
//     while (Q--)
//     {
//         int q, Y;
//         string X;
//         cin >> q;

//         if (q == 1)
//         {
//             cin >> X >> Y;
//             m[X] += Y;
//         }
//         else if (q == 2)
//         {
//             cin >> X;
//             m.erase(X);
//         }
//         else if (q == 3)
//         {
//             cin >> X;
//             auto itr = m.find(X);
//             if (itr != m.end())
//             {

//                 cout << itr->second << endl;
//             }
//             else
//             {
//                 cout << 0 << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     cin.ignore();

//     map<string, string> slogans;

//     while (N--)
//     {
//         string first_line, second_line;
//         getline(cin, first_line);
//         getline(cin, second_line);
//         slogans[first_line] = second_line;
//     }

//     int Q;
//     cin >> Q;
//     cin.ignore();

//     for (int i = 0; i < Q; ++i)
//     {
//         string slogan;
//         getline(cin, slogan);
//         cout << slogans[slogan] << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string input;
//     getline(cin, input);

//     unordered_map<int, int> occur;
//     istringstream integers(input);
//     int num;

//     while (integers >> num)
//     {
//         occur[num]++;
//     }

//     vector<pair<int, int>> result;

//     for (const auto& pair : occur)
//     {
//         result.push_back(pair);
//     }

//     for (const auto& pair : result)
//     {
//         cout << pair.first << " " << pair.second << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int x1, y1, x2, y2;
//     cin >> x1 >> y1 >> x2 >> y2;
//     int diff_x = abs(x2 - x1);
//     int diff_y = abs(y2 - y1);
//     cout << max(diff_x, diff_y) << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         int count = 0;
//         while (true)
//         {
//             if (n == 1)
//             {
//                 break;
//             }
//             else if (n % 5 == 0)
//             {
//                 n = 4 * n / 5;
//                 count++;
//                 continue;
//             }
//             else if (n % 3 == 0)
//             {
//                 n = 2 * n / 3;
//                 count++;
//                 continue;
//             }
//             else if (n % 2 == 0)
//             {
//                 n = n / 2;
//                 count++;
//                 continue;
//             }
//             else
//             {
//                 count = -1;
//                 break;
//             }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int A, B;
//     cin >> A >> B;
//     int m = max(A, B);
//     int K = 0;
//     bool flag = false;
//     while (m >= K)
//     {
//         if ((abs(A - K)) == (abs(B - K)))
//         {
//             cout << K << endl;
//             flag = true;
//             break;
//         }
//         K++;
//     }
//     if (flag == false)
//         cout << "IMPOSSIBLE";

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long n;
//     int count = 0;
//     cin >> n;

//     string str = to_string(n);

//     for (char c : str)
//     {
//         if (c == '4' || c == '7')
//         {
//             count++;
//         }
//     }

//     string count_lucky = to_string(count);

//     for (char c : count_lucky)
//     {
//         if (c != '4' && c != '7')
//         {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }

//     cout << "YES" << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, value, count=0;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> value;
//         if (value != i)
//             count++;
//     }
//     if (count <= 2)
//         cout << "YES";
//     else
//         cout << "NO";
//     return 0;
// }

// #include <bits/stdc++.h>
// #define PI acos(-1)
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     double l, w, r, circle_area, rectangle_area;
//     while(t--)
//     {
//         cin>>l;
//         r = l / 5;
//         w = (l * 6) / 10;
//         circle_area = PI * r * r;
//         rectangle_area = (l * w) - circle_area;
//         cout<<fixed<<setprecision(2)<<circle_area<<" "<<rectangle_area <<endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int h1,h2, m1, m2;
//     char c;

//     cin >> h1 >> c >> m1;
//     cin >> h2 >> c >> m2;

//     int min1 = h1 * 60 + m1;
//     int min2 = h2 * 60 + m2;

//     int avg = (min1 + min2) / 2;
//     int h3 = avg / 60;
//     int m3 = avg % 60;

//     cout << setfill('0') << setw(2) << h3 << ":" << setw(2) << m3 << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, k, l, c, d, p, nl, np;
//     cin >> n >> k >> l >> c >> d >> p >> nl >> np;
//     int ans = min(min(k*l/nl,c*d),p/np)/n;
//     cout<<ans<<endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     int even = 0, odd = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         if (x % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//         v.push_back(x);
//     }
//     if (even > 1)
//     {
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i] % 2 != 0)
//                 cout << i + 1 << endl;
//         }
//     }
//     else
//     {
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i] % 2 == 0)
//                 cout << i + 1 << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// string kangaroo(int x1, int v1, int x2, int v2)
// {
//     if (v1 == v2)
//     {
//         if (x1 == x2)
//         {
//             return "YES";
//         }
//         else
//         {
//             return "NO";
//         }
//     }
//     else if ((x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) > 0)
//     {
//         return "YES";
//     }
//     else
//     {
//         return "NO";
//     }
// }

// int main()
// {
//     int x1, v1, x2, v2;
//     cin >> x1 >> v1 >> x2 >> v2;
//     cout << kangaroo(x1, v1, x2, v2) << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// string timeConversion (string s)
// {
//     int hours = stoi(s.substr(0, 2));
//     int minutes = stoi(s.substr(3, 2));
//     int seconds = stoi(s.substr(6, 2));

//     string am_pm = s.substr(8, 2);

//     if (am_pm == "AM" && hours == 12)
//     {
//         hours = 0;
//     }
//     else if (am_pm == "PM" && hours != 12)
//     {
//         hours += 12;
//     }

//     return (hours < 10 ? "0" : "") + to_string(hours) + ":" +
//            (minutes < 10 ? "0" : "") + to_string(minutes) + ":" +
//            (seconds < 10 ? "0" : "") + to_string(seconds);
// }

// int main()
// {
//     string s;
//     cin >> s;

//     cout << timeConversion(s) << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int birthdayCakeCandles(vector<long long> v)
// {
//     auto m = max_element(v.begin(), v.end());
//     int max_value = *m;

//     int c = count(v.begin(), v.end(), max_value);
//     return c;
// }

// int main()
// {
//     vector<long long> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }

//     cout << birthdayCakeCandles(v) << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void miniMaxSum(vector<int> a) {
//     long long sum = 0;
//     auto number = minmax_element(a.begin(), a.end());

//     for (int i = 0; i < a.size(); i++) {
//         sum += a[i];
//     }

//     long long max_sum = sum - *number.first;
//     long long min_sum = sum - *number.second;

//     cout << min_sum << " " << max_sum << endl;
// }

// int main() {
//     vector<int> a(5);

//     for (int i = 0; i < 5; i++) {
//         cin >> a[i];
//     }
//     miniMaxSum(a);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> compareTriplets(vector<int> v1, vector<int> v2){
//     vector<int>v3={0,0};
//     for (int i = 0; i < 3; i++)
//     {
//         if(v1[i]>v2[i]){
//             v3.front()=v3.front()+1;
//         }
//         else if(v1[i]<v2[i]){
//             v3.back()=v3.back()+1;
//         }
//     }
//     return v3;

// }

// int main()
// {
//     vector<int>v1;
//     vector<int>v2;
//     for (int i = 0; i < 3; i++)
//     {
//        int x;
//        cin>>x;
//        v1.push_back(x);
//     }
//     for (int i = 0; i < 3; i++)
//     {
//        int x;
//        cin>>x;
//        v2.push_back(x);
//     }

//     vector<int> v3 = compareTriplets(v1,v2);
//     cout<<v3.front()<<" "<<v3.back()<<endl;

// }
