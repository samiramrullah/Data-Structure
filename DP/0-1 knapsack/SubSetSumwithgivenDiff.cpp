// Given an array arr[] of size N and a given difference diff, 
// the task is to count the number of partitions that we can perform such that the difference between 
// the sum of the two subsets is equal to the given difference.
// Input: N = 4, arr[] = [5, 2, 6, 4], diff = 3
// Output: 1
// Explanation: We can only have a single partition which is shown below:
// {5, 2} and {6, 4} such that S1 = 7 and S2 = 10 and thus the difference is 3

// Input: N = 5, arr[] = [1, 2, 3, 1, 2], diff = 1
// Output: 5
// Explanation: We can have five partitions which is shown below
// {1, 3, 1} and {2, 2} – S1 = 5, S2 = 4
// {1, 2, 2} and {1, 3} – S1 = 5, S2 = 4
// {3, 2} and {1, 1, 2} – S1 = 5, S2 = 4
// {1, 2, 2} and {1, 3} – S1 = 5, S2 = 4
// {3, 2} and {1, 1, 2} – S1 = 5, S2 = 4
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
int CountSubsetSum(vector<int>arr,int sum)
{
    int table[arr.size()+1][sum+1];
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
int SubsetSumWithGivenDiff(vector<int>arr,int diff)
{
    int sum=0;
    for(auto i:arr) sum+=i;
    sum=(sum+diff)/2;

    return CountSubsetSum(arr,sum);
}
int main()
{
    vector<int> arr;
    arr=CreateList(arr);
    cout<<"Enter diff\n";
    int diff;
    cin>>diff;
    cout<<SubsetSumWithGivenDiff(arr,diff)<<endl;
    return 0;
}