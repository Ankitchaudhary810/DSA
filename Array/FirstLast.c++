#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << arr[0] << " ";
    cout << arr[n - 1];
    return 0;
}