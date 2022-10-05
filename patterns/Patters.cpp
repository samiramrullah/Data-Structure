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

int main()
{
    int n;
    cin >> n;
    // pattern1(n);
    pattern2(n);

    return 0;
}