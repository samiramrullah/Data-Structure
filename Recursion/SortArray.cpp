#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&arr,int temp)
{
    if(arr.size()==0|| arr[arr.size()-1]<=temp)
    {

        arr.push_back(temp);
        return;
    }
    int val=arr[arr.size()-1];
    arr.pop_back();
    insert(arr,temp);
    arr.push_back(val);
}
void sortarray(vector<int>&arr)
{
    if(arr.size()==0) return;
    int temp=arr[arr.size()-1];
    arr.pop_back();
    sortarray(arr);
    insert(arr,temp);
}
int main()
{
    vector<int>arr={7,2,-1,8,3,100,0,0,0};
    // cout<<arr.size();
    sortarray(arr);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}