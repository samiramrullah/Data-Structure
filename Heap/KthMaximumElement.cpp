// Given an array arr[] and an integer K where K is smaller 
// than size of array, the task is to find the Kth smallest element in the given array. 
// It is given that all array elements are distinct.
// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 10
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
void print(vector<int>v)
{
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int KthGargestElement(vector<int>arr,int k)
{
    priority_queue <int, vector<int>, greater<int> > minh;
    for(int i=0;i<=arr.size();i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k+1)
        {
            minh.pop();
        }
    }
    return minh.top();
}
int main()
{
    vector<int> arr;
    arr=CreateList(arr);
    cout<<"Enter k\n";
    print(arr);
    int k;
    cin>>k;
    cout<<KthGargestElement(arr,k)<<endl;
    return 0;
}