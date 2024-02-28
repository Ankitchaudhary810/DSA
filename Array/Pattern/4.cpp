using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (char)('A' + j);
        }
        cout << '\n';
    }

    return 0;
}
