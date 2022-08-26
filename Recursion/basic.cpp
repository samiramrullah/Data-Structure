#include<bits/stdc++.h>
using namespace std;

vector<int> CreateList(vector<int> arr)
{
    cout<<"Enter data\n";
    int data;
    cin>>data;
    if(data!=-1)
    {
        arr.push_back(data);
        arr=CreateList(arr);
    }
    else
    {
        return arr;
    }
    return arr;
}
void print(vector<int>arr)
{
    if(arr.size()==0) return;
    int temp=arr[arr.size()-1];
    arr.pop_back();
    cout<<temp;
    print(arr);
    
}
int main()
{
    vector<int>arr;
    cout<<"List created\n";
    arr=CreateList(arr);
    print(arr);
    return 0;
}