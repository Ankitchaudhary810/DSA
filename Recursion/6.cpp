#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int md, int low, int hg)
{
    int mid, c = 0;

    if (low <= hg)
    {
        mid = (low + hg) / 2;
        if (md == arr[mid])
        {
            c = 1;
        }
        else if (md < arr[mid])
        {
            return binarySearch(arr, n, md, low, mid - 1);
        }
        else
        {
            return binarySearch(arr, n, md, mid + 1, hg);
        }
    }
    else
        return c;
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    int md;
    cin >> md;
    cout << binarySearch(arr, n, md, 0, n - 1);

    return 0;
}