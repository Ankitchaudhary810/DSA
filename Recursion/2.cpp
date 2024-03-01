#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{

    // Think in Term of PMI;
    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int smallOutput1 = fibonacci(n - 1);
    int smallOutput2 = fibonacci(n - 2);

    return smallOutput1 + smallOutput2;
}

int Power(int n, int t)
{
    // base case
    if (t == 0)
        return 1;

    // assumption
    int smallerPower = Power(n, t - 1);

    return n * smallerPower;
}

int main()
{

    int n, t;
    cin >> n >> t;
    int ans = Power(n, t);
    cout << ans << '\n';
}