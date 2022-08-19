#include<bits/stdc++.h>
using namespace std;


void findDuplicate(int arr[],int n)
{
    vector<int> ans;
    set<int>s;
   
    for(int i=0;i<n;i++)
    {
        int count=s.size();
        s.insert(arr[i]);
        if(s.size()==count)
        {
            ans.push_back(arr[i]);
            
        }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}

int main()
{
    cout<<"Enter size of array\n";
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findDuplicate(arr,n);
    return 0;
}