using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int main()
{

    // hollow rectangle printing....

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
