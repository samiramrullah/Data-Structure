#include<bits/stdc++.h>
using namespace std;

void printNtimes(int n)
{
    if(n<=0) return ;
    cout<<"Samir\n";
    printNtimes(n-1);
}
void printuptoN(int n,int i=0)
{
    if(i>n) return ;
    cout<<i<<" ";
    printuptoN(n,(i+1));
}
int main()
{
    int n;
    cin>>n;
    printNtimes(n);
    printuptoN(n);
    return 0;
}