// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // vector<int>v;
//     // vector<int>v={1,2,4,5};
//     // v.push_back(1);
//     // vector<int>v2(12,100);
//     // vector<int>v(v2);
//     int arr[] = {1, 2, 4, 5,5,44,27,22,14,67};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     vector<int> v(arr, arr + n);
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i] << endl;
//     // }
//     v.resize(4);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<< v[i] << endl;
//     }
    

//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

char mixColors(char color1, char color2) {
    if ((color1 == 'R' && color2 == 'B') || (color1 == 'B' && color2 == 'R'))
        return 'P'; 
    else if ((color1 == 'R' && color2 == 'G') || (color1 == 'G' && color2 == 'R'))
        return 'Y';
    else if ((color1 == 'B' && color2 == 'G') || (color1 == 'G' && color2 == 'B'))
        return 'C'; 
    else
        return ' '; 
}

string getColor(const string& colors) {
    stack<char> colorStack;

    for (char color : colors) {
        if (!colorStack.empty() && colorStack.top() == color) {
            colorStack.pop(); // Colors vanish if two same colors mix up
        } else {
            // Check for color combinations
            if (!colorStack.empty()) {
                if ((colorStack.top() == 'R' && color == 'B') || (colorStack.top() == 'B' && color == 'R')) {
                    colorStack.pop();
                    colorStack.push('P'); // Red + Blue = Purple
                } else if ((colorStack.top() == 'R' && color == 'G') || (colorStack.top() == 'G' && color == 'R')) {
                    colorStack.pop();
                    colorStack.push('Y'); // Red + Green = Yellow
                } else if ((colorStack.top() == 'B' && color == 'G') || (colorStack.top() == 'G' && color == 'B')) {
                    colorStack.pop();
                    colorStack.push('C'); // Blue + Green = Cyan
                } 
                else {
                    colorStack.push(color);
                }
            } else {
                colorStack.push(color);
            }
        }
    }

    string result;
    while (!colorStack.empty()) {
        result = colorStack.top() + result;
        colorStack.pop();
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string colors;
        cin >> colors;

        string finalColors = getColor(colors);

        string compressedColors;
        char prevColor = '\0';
        for (char color : finalColors) {
            if (color != prevColor) {
                compressedColors += color;
                prevColor = color;
            }
        }

        // Check if compressedColors is empty or not
        if (compressedColors.empty()) {
            cout << "No" << endl;
        } else {
            cout << compressedColors << endl;
        }
    }

    return 0;
}

