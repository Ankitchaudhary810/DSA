using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int main()
{

    int n;
    cin >> n; // n -> 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}