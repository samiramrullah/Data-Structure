// Given an array of non - negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.
// Input:
// N = 6
// arr[] = {3, 34, 4, 12, 5, 2}
// sum = 9
// Output: 1 
// Explanation: Here there exists a subset with
// sum = 9, 4+3+2 = 9.
#include <bits/stdc++.h>
using namespace std;
vector<int> CreateList(vector<int>v)
{
    cout<<"Enter data\n";
    int data;
    cin>>data;
    if(data==-1)
    {
       return v;
    }
    else{
        v.push_back(data);
        v=CreateList(v);
    }
    return v;
}
// return total subset sum with equal to given value
bool TotalSubsetSum(vector<int>arr,int sum)
{
     //table
     bool table[arr.size()+1][sum+1];
     //initialization
     for(int i=0;i<=arr.size();i++) table[i][0]=true;
     for(int j=1;j<=sum;j++) table[0][j]=false;

     //choice diagran
     for(int i=1;i<=arr.size();i++)
     {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                table[i][j]=table[i-1][j-arr[i-1]]|| table[i-1][j];
            }
            else
            {
                table[i][j]=table[i-1][j];
            }
        }
     }
     return table[arr.size()][sum];
}
int main()
{
    vector<int> arr;
    arr=CreateList(arr);
    cout<<"Enter sum\n";
    int sum;
    cin>>sum;
    cout<<TotalSubsetSum(arr,sum)<<endl;
    return 0;
}