using namespace std;
#include <bits/stdc++.h>

bool isSorted(int arr[], int n)
{
    if (n == 1 || n == 0)
        return true;

    if (arr[0] > arr[1])
        return false;

    bool isSmallerSorted = isSorted(arr + 1, n - 1);

    /*if (isSmallerSorted)
    {
        return true;
    }
    else
    {
        return false;
    }*/

    return isSmallerSorted;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool ans = isSorted(arr, n);
    cout << "ans: " << ans << '\n';
    if (ans)
        cout << "array is sorted" << '\n';
    else
        cout << "array is not Sorted" << '\n';

    return 0;
}