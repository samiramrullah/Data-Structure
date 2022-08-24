#include <bits/stdc++.h>
using namespace std;

void printNtimes(int n)
{
    if (n <= 0)
        return;
    cout << "Samir\n";
    printNtimes(n - 1);
}
void printuptoN(int n, int i = 0)
{
    if (i > n)
        return;
    cout << i << " ";
    printuptoN(n, (i + 1));
}
void printOpposite(int n)
{
    if (n < 0)
        return;
    cout << n << " ";
    printOpposite(n - 1);
}
void printBacktracking(int n)
{
    if (n <= 0)
        return;
    printBacktracking(n - 1);
    cout << (n);
}
int printSumuptoN(int n)
{
    if (n <= 0)
        return 0;
    return n + printSumuptoN(n - 1);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
void ReverseArray(int *arr, int n, int i = 0)
{
    if (i >= n)
        return;
    swap(arr[i], arr[n - 1]);
    ReverseArray(arr, n - 1, (i + 1));
}
bool ispalindrome(string s, int n, int i = 0)
{
    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
        return false;
    else
        return ispalindrome(s, n, i + 1);
}
int main()
{
    int n;
    // cin >> n;
    // printNtimes(n);
    // printuptoN(n);
    // printOpposite(n);
    // backtracking
    // printBacktracking(n);
    // cout << printSumuptoN(n);
    // cout<<factorial(n);
    // int arr[] = {1, 2, 3, 4, 5, 90};
    // n = sizeof(arr) / sizeof(arr[0]);
    // ReverseArray(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    string s="ala";
    cout << ispalindrome(s, s.length());
    return 0;
}