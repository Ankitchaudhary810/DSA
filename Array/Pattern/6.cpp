using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int main()
{

    int n;
    cin >> n; // n -> 5;
    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << cnt++ << " ";
        }
        cout << '\n';
    }

    return 0;
}
