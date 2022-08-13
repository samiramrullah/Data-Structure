// Given two strings text1 and text2, 
// return the length of their longest common 
// subsequence. If there is no common subsequence, return 0.
// Example 1:

// Input: text1 = "abcde", text2 = "ace" 
// Output: 3  
// Explanation: The longest common subsequence is "ace" and its length is 3.

#include <bits/stdc++.h>
using namespace std;
int MaximumProfit(string s1,string s2)
{
    int m=s1.length();
    int n=s2.length();
    int table[m+1][n+1];
    for(int i=0;i<=m;i++) table[i][0]=0;
    for(int j=0;j<=n;j++) table[0][j]=0;

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                table[i][j]=table[i-1][j-1]+1;
            }
            else
            {
                table[i][j]=max(table[i-1][j],table[i][j-1]);
            }
        }
    }
    return table[m][n];
}
int main()
{
    string s1,s2;
    cout<<"Enter string\n";
    cin>>s1;
    cout<<"Second String\n";
    cin>>s2;
    cout<<MaximumProfit(s1,s2)<<endl;
    return 0;
}