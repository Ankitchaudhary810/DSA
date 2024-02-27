using namespace std;
#include <bits/stdc++.h>

void printAllPrefixes(char str[])
{
    for (int e = 0; str[e] != '\0'; e++)
    {
        for (int s = 0; s <= e; s++)
        {
            cout << str[s];
        }
        cout << endl;
    }
}

int main()
{

    char str[] = "ankit";

    cout << "hi" << '\n';
    printAllPrefixes(str);

    return 0;
}