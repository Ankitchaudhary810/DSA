using namespace std;
#include <bits/stdc++.h>

bool isSorted(int arr[], int n)
{
    if (n == 1 || n == 0)
        return true;

    if (arr[0] > arr[1])
        return false;

    bool isSmallerSorted = isSorted(arr + 1, n - 1);

    /*
    if (isSmallerSorted)
    {
        return true;
    }
    else
    {
        return false;
    }
    */

    return isSmallerSorted;
}

int sumOfArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[0] + sumOfArray(arr + 1, n - 1);
}

bool checkElement(int arr[], int n, int ele)
{

    if (n == 0)
    {
        return false;
    }

    if (ele == arr[0])
        return true;

    return checkElement(arr + 1, n - 1, ele);
}

// pending
int FirstPos(int arr[], int n, int x, int i)
{

    if (i == n)
    {
        return -1;
    }
    if (arr[i] == x)
    {
        return i;
    }

    return FirstPos(arr, n, x, i + 1);
}

// pending
int LastPost(int arr[], int n, int x, int i, int ans)
{

    if (i == n)
    {
        return ans;
    }
    if (arr[i] == x)
    {
        ans = i;
    }
    return LastPost(arr, n, x, i + 1, ans);
}

void PrintAllPos(int arr[], int n, int x, int i)
{

    if (i == n)
    {
        return;
    }

    if (arr[i] == x)
    {
        cout << i << " ";
    }

    PrintAllPos(arr, n, x, i + 1);
}

void saveAllPos(int arr[], int n, int x, int i, vector<int> &ans)
{

    if (i == n)
    {
        return;
    }
    if (arr[i] == x)
        ans.push_back(i);

    saveAllPos(arr, n, x, i + 1, ans);
}

bool checkPal(int arr[], int s, int e)
{
    if (s > e)
    {
        return true;
    }
    if (arr[s] == arr[e])
    {
        return checkPal(arr, s + 1, e - 1);
    }
    else
    {
        return false;
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    /*
    bool ans = isSorted(arr, n);

    cout << "ans: " << ans << '\n';
    if (ans)
        cout << "array is sorted" << '\n';
    else
        cout << "array is not Sorted" << '\n';
    */

    // cout << sumOfArray(arr, n) << '\n';

    // if (checkElement(arr, n, 3))
    // {
    //     cout << "Element is there" << '\n';
    // }
    // else

    //     cout << "Element is There" << '\n';

    // cout << FirstPos(arr, n, 3, 0, 0) << '\n';

    // cout << LastPost(arr, n, 3, 0, -1) << '\n';

    // PrintAllPos(arr, n, 3, 0);

    // vector<int> ans;
    // saveAllPos(arr, n, 3, 0, ans);
    // cout << ans.size() << '\n';

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    cout << checkPal(arr, 0, n - 1);

    return 0;
}