// Given two strings ‘X’ and ‘Y’, find the length of the longest common substring.
// Input : X = “GeeksforGeeks”, y = “GeeksQuiz”
// Output : 5
// Explanation:
// The longest common substring is “Geeks” and is of length 5.

// Input : X = “abcdxyz”, y = “xyzabcd”
// Output : 4
// Explanation:
// The longest common substring is “abcd” and is of length 4.

// Input : X = “zxabcdezy”, y = “yzabcdezx”
// Output : 6
// Explanation:
// The longest common substring is “abcdez” and is of length 6.
#include <bits/stdc++.h>
using namespace std;
int LengthLongestCommonSubstring(string S1, string S2)
{
    int m = S1.length();
    int n = S2.length();
    int table[m + 1][n + 1];
    int result = 0;
    for (int i = 0; i <= m; i++)
        table[i][0] = 0;
    for (int j = 0; j <= n; j++)
        table[0][j] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (S1[i - 1] == S2[j - 1])
            {
                table[i][j] = table[i - 1][j - 1]+1;
                if(table[i][j]>result)
                {
                    result = table[i][j];
                }
            }
            else
            {
                table[i][j]=0;
            }
        }
    }
    return result;
}
int main()
{
   string s1,s2;
   cout<<"String 1\n";
   cin>>s1;
   cout<<"String 2\n";
   cin>>s2;
   cout<<LengthLongestCommonSubstring(s1,s2)<<endl;
}