#include<bits/stdc++.h>
using namespace std;


void findDuplicate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[arr[n]%n]=arr[arr[n]%n]+n;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n>1)
        {
            cout<<i<<" ";
        }
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
    vector<int>duplicates;
   findDuplicate(arr,n);
    // for(auto i:duplicates)
    // {
    //     cout<<i<<" ";
    // }
    return 0;
}