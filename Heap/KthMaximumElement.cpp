// Given an array arr[] and an integer K where K is smaller 
// than size of array, the task is to find the Kth smallest element in the given array. 
// It is given that all array elements are distinct.
// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.
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
int KthSmallestElement(vector<int>arr,int k)
{
    priority_queue <int> maxh;
    for(int i=0;i<arr.size();i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    return maxh.top();
}
int main()
{
    vector<int> arr;
    arr=CreateList(arr);
    cout<<"Enter k\n";
    int k;
    cin>>k;
    cout<<KthSmallestElement(arr,k)<<endl;
    return 0;
}