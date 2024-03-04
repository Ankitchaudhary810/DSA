#include <bits/stdc++.h>
using namespace std;
void generatePermutations(int i, int n, vector<int> arr, vector<vector<int>> &ans)
{
    if (i == n)
    {
        ans.push_back(arr);
        return;
    }
    for (int k = i; k < n; k++)
    {
        swap(arr[k], arr[i]);
        generatePermutations(i + 1, n, arr, ans);
        swap(arr[k], arr[i]);
    }
}

int countChar(string str, int i, int &cnt)
{
    if (i == str.size())
    {
        return 0;
    }

    return 1 + countChar(str, i + 1, cnt);
}

void maxArrElement(int i, vector<int> arr, int &MAX)
{
    if (i == arr.size())
    {
        return;
    }

    if (arr[i] > MAX)
    {
        cout << "max is: " << MAX << '\n';
        MAX = arr[i];
        return maxArrElement(i + 1, arr, MAX);
    }
}

int toh(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << "n => " << n << '\n';
    return toh(n - 1) + 1 + toh(n - 1);
}

void printSteps(int n, char s, char d, char h)
{
    if (n == 0)
    {
        return;
    }
    printSteps(n - 1, s, h, d);
    cout << "Moving disk " << n << " from source " << s << " to destination => " << d << '\n';
    printSteps(n - 1, h, d, s);
}
int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    // int MAX = -0;

    // maxArrElement(0, arr, MAX);
    // cout << "max element: " << MAX << '\n';
    // vector<vector<int>> ans;
    // generatePermutations(0, n, arr, ans);

    // for (auto it : ans)
    // {
    //     for (auto x : it)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << "\n";
    // }
    // string str;
    // cin >> str;
    // int cnt;

    // cout << countChar(str, 0, cnt);

    // cout << toh(n) << '\n';
    printSteps(n, 'A', 'C', 'B');
}