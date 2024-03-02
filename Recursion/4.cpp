#include <bits/stdc++.h>
using namespace std;

void print(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }

    cout << input[0] << " ";
    print(input + 1);
}

void reversePrint(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }

    reversePrint(input + 1);
    cout << input[0] << " ";
}

int strLen(char input[])
{
    if (input[0] == '\0')
    {
        return 0;
    }

    return 1 + strlen(input + 1);
}

void replaceChar(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == 'a')
    {
        input[0] = 'x';
    }
    replaceChar(input + 1);
}

void removeConsecutiveDuplicate(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }

    if (input[0] == input[1])
    {
        // shifting...
        for (int i = 0; input[i] != '\0'; i++)
        {
            input[i] = input[i + 1];
        }
        removeConsecutiveDuplicate(input);
    }
    else
    {
        removeConsecutiveDuplicate(input + 1);
    }
}

int main()
{

    char input[100];
    cin >> input;
    // print(input);
    // cout << '\n';
    // reversePrint(input);

    // cout << strLen(input);
    // replaceChar(input);
    // cout << input << '\n';

    removeConsecutiveDuplicate(input);
    cout << input << '\n';
    return 0;
}