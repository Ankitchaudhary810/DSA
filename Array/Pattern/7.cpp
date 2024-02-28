using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int main()
{

    int n;
    cin >> n;
    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }

        cout << '\n';
    }
    return 0;
}
//      *
//     **
//    ***
//   ****
//  *****
// ******