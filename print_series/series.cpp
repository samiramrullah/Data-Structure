#include<bits/stdc++.h>
using namespace std;

void printSeries(int n)
{
   cout<<n<<" ";
   if(n>0) 
   {
    n=n-5;
   }
   else
   {
    n=n+5;
   }
   if(n==16) return ;
   printSeries(n);
}
int main()
{
    printSeries(16);
    return 0;
}