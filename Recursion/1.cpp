#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    // base case;
    if (n == 0)
    {
        return 1;
    }

    // assumption
    int smallerAns = fact(n - 1);

    // 3rd step induction step.
    int ans = n * (smallerAns);
}

int main()
{

    int n;
    cin >> n;

    int ans = fact(n);
    cout << ans << '\n';
}