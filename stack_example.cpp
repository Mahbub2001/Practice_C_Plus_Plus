#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isConvertibleToInt(const string &str)
    {
        try
        {
            stoi(str);
            return true;
        }
        catch (const exception &e)
        {
            return false;
        }
    }

    int calPoints(vector<string> &operations)
    {
        stack<int> st;
        int sum = 0;
        for (string operation : operations)
        {
            if (isConvertibleToInt(operation))
            {
                int num = stoi(operation);
                st.push(num);
            }
            else if (operation == "C")
            {
                st.pop();
            }
            else if (operation == "D")
            {
                int num = st.top();
                int s = 2 * num;
                st.push(s);
            }
            else if (operation == "+")
            {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.push(num1);
                int s2 = num1 + num2;
                st.push(s2);
            }
        }
        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
int main()
{

    return 0;
}