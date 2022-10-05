#include <bits/stdc++.h>
using namespace std;

// print the pattern   pattern1
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *

// n*n

void pattern1(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "* ";
            j++;
        }
        cout << '\n';
        i++;
    }
}


// pattern 2:
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// n*n times 

void pattern2(int n)
{
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<'\n';
        i++;
    }
}


// pattern 3:
// 3 2 1
// 3 2 1
// 3 2 1

void pattern3(int n)
{
    int i=1;
    while(i<=n)
    {
        int j=n;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<'\n';
        i++;
    }
}

// pattern4:
// 1 2 3 
// 4 5 6
// 7 8 9

void pattern4(int n)
{
    int i=1;
    while(i<=n)
    {
        int count=0;
        while (count<3)
        {
            if(i>n) return;
            cout<<i<<" ";
            i++;
            count++;
        }
        cout<<'\n';
        
    }
}
int main()
{
    int n;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    pattern4(n);

    return 0;
}