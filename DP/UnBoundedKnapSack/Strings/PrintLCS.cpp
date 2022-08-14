// Given two sequences, print the longest subsequence present in both of them.

// Examples: 

// LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3. 
// LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4.

#include <bits/stdc++.h>
using namespace std;

// int * LCS(string s1,string s2)
// {
   
// }
string PrintLCS(string s1, string s2)
{
   
    //lcs
    int table[s1.length()+1][s2.length()+1];
    for(int i=0;i<=s1.length();i++) table[i][0]=0;
    for(int j=0;j<=s2.length();j++) table[0][j]=0;

    for(int i=1;i<=s1.length();i++)
    {
        for(int j=1;j<=s2.length();j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                table[i][j]=table[i-1][j-1]+1;
            }
            else{
                table[i][j]=max(table[i-1][j],table[i][j-1]);
            }
        }
    }
    string ans="";
    //print lcs
    int i=s1.length();
    int j=s2.length();

    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }
        else
        {
            if(table[i][j-1]>table[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string s1,s2,ans;
    cout<<"First\n";
    cin>>s1;
    cout<<"second\n";
    cin>>s2;
    ans=PrintLCS(s1,s2);
    cout<<ans<<endl;
    return 0;
}