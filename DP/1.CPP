#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int fib2(int n, int *dp)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int output = fib2(n - 1, dp) + fib2(n - 2, dp);
    dp[n] = output; // store the ouput
    return output;
}

int countStep(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    int x = countStep(n - 1);
    int y = INT_MAX;
    int z = INT_MAX;
    if (n % 2 == 0)
        y = countStep(n / 2);

    if (n % 3 == 0)
        z = countStep(n / 3);

    int ans = min(x, min(y, z)) + 1;
    return ans;
}

int helper(int n, int *dp)
{
    if (n <= 1)
    {
        return 0;
    }
    // checking if the value is already present.
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int x = helper(n - 1, dp);
    int y = INT_MAX;
    int z = INT_MAX;
    if (n % 2 == 0)
        y = helper(n / 2, dp);

    if (n % 3 == 0)
        z = helper(n / 3, dp);

    int ans = min(x, min(y, z)) + 1;
    dp[n] = ans;
    return ans;
}

int countStepsWithDP(int n)
{

    int *dp = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    return helper(n, dp);
}

int main()
{
    int n;
    cin >> n;
    // int *dp = new int[n + 1];
    // for (int i = 0; i <= n; i++)
    // {
    //     dp[i] = 0;
    // }
    // cout << "fib2 => " << fib2(n, dp) << '\n';
    // cout << "fib => " << fib(n) << '\n';

    // delete[] dp;

    // cout << countStep(n) << '\n';
    cout << countStepsWithDP(n) << '\n';
    return 0;
}