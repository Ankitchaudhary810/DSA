#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of Maxtrix: ";
    cin >> n;

    int arr1[n][n];
    cout << "Enter the Element for first Array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }

    int arr2[n][n];
    cout << "Enter the Element for second Array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }

    int sumArray[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sumArray[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << sumArray[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}