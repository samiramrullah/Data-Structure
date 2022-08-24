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
    ReverseArray(arr, n - 1, (i+1));
}
int main()
{
    int n;
    cin >> n;
    // printNtimes(n);
    // printuptoN(n);
    // printOpposite(n);
    // backtracking
    // printBacktracking(n);
    // cout << printSumuptoN(n);
    // cout<<factorial(n);
    int arr[5] = {1, 2, 3, 4, 5};
    ReverseArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}