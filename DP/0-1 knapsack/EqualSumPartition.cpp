// Given a non-empty array nums containing only positive integers, 
// find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.
// Input: nums = [1,5,11,5]
// Output: true
// Explanation: The array can be partitioned as [1, 5, 5] and [11].
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


bool SubsetSum(vector<int>arr,int sum)
{
    int table[arr.size()+1][sum+1];
    //initalization
    for(int i=0;i<=arr.size();i++) table[i][0]=true;
    for(int j=1;j<=sum;j++) table[0][j]=false;

    for(int i=1;i<=arr.size();i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                table[i][j]=table[i-1][j-arr[i-1]]||table[i-1][j];
            }
            else
            {
                table[i][j]=table[i-1][j];
            }
        }
    }
    return table[arr.size()][sum];
}

bool IsEqualSumPartition(vector<int>arr)
{
    int sum=0;
    for(auto i:arr)
    {
       sum+=i;
    }
    
    if(sum%2!=0)
    {
        return false;
    }
    else
    {
       return SubsetSum(arr,sum/2);
    }
}
int main()
{
    vector<int> arr;
    arr=CreateList(arr);
    cout<<IsEqualSumPartition(arr);
    
    return 0;
}