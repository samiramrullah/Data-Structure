// Given a set of N items, each with a weight and a value,
// represented by the array w[] and val[] respectively. Also, a knapsack with weight limit W.
// The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.
// Note: Each item can be taken any number of times.
// Input: N = 2, W = 3
// val[] = {1, 1}
// wt[] = {2, 1}
// Output: 3
// Explanation:
// 1.Pick the 2nd element thrice.
// 2.Total profit = 1 + 1 + 1 = 3. Also the total
//   weight = 1 + 1 + 1  = 3 which is <= W.

#include <bits/stdc++.h>
using namespace std;
vector<int> CreateList(vector<int> v)
{
    cout << "Enter data\n";
    int data;
    cin >> data;
    if (data == -1)
    {
        return v;
    }
    else
    {
        v.push_back(data);
        v = CreateList(v);
    }
    return v;
}
int MaximumProfit(vector<int> weight, vector<int> val, int W)
{
    int table[weight.size() + 1][W + 1];
    for (int i = 0; i <= weight.size(); i++)  table[i][0] = 0;
    for (int j = 0; j <= W; j++) table[0][j] = 0;

    for (int i = 1; i <= weight.size(); i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (weight[i] <= W)
            {
                table[i][j] = max(val[i - 1] + table[i][j - weight[i - 1]], table[i - 1][j]);
            }
            table[i][j] = table[i - 1][j];
        }
    }
    return table[weight.size()][W];
}
int main()
{
    vector<int> weight, val;
    cout << "Enter weight\n";
    weight = CreateList(weight);
    cout << "Enter value\n";
    val = CreateList(val);
    cout << "Enter total weight\n";
    int W;
    cin >> W;
    cout << MaximumProfit(weight, val, W) << endl;
    return 0;
}