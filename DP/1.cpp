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

int main()
{
    int n;
    cin >> n;
    int *dp = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = 0;
    }
    cout << "fib2 => " << fib2(n, dp) << '\n';
    cout << "fib => " << fib(n) << '\n';

    delete[] dp;
    return 0;
}