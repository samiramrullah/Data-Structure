// Given an array arr[] of non-negative integers and an integer sum,
// the task is to count all subsets of the given array with a sum equal to a given sum.
// Input: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
//        sum = 10
// Output: 3
// Explanation: {2, 3, 5}, {2, 8}, {10}
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
int CountSubSetSum(vector<int> arr,int sum)
{
    // table;
    int table[arr.size()+1][sum+1];
    //initialization
    for(int i=0;i<=arr.size();i++) table[i][0]=1;
    for(int j=1;j<=sum;j++) table[0][j]=0;

    for(int i=1;i<=arr.size();i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                table[i][j]=table[i-1][j-arr[i-1]]+table[i-1][j];
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
    cout<<CountSubSetSum(arr,sum)<<endl;
    return 0;
}