#include<bits/stdc++.h>
using namespace std;

void permutations(vector<vector<int>>&result,vector<int>arr,int low,int high)
{
    if(low==high)
    {
        result.push_back(arr);
        return;
    }
    for(int i=low;i<=high;i++)
    {
        swap(arr[low],arr[i]);
        permutations(result,arr,1+low,high);
        swap(arr[low],arr[i]);
    }
}
void Permute(vector<int>&arr)
{
    vector<vector<int> > result;
    int x=arr.size()-1;
    permutations(result,arr,0,x);
    for(auto i :result)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    
    vector<int>arr;
    arr.push_back(-1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(-1);
    arr.push_back(-4);
    // cout<<arr.size();
    Permute(arr);
    return 0;
}