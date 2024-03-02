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

// pending..
void AllSubSequenceOfStr(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << " ";
        return;
    }

    AllSubSequenceOfStr(input.substr(1), output);
    AllSubSequenceOfStr(input.substr(1), output + input[0]);
}

void printPermutations(char str[], int i)
{
    if (str[i] == '\0')
    {
        cout << str << '\n';
        return;
    }

    for (int j = i; str[j] != '\0'; j++)
    {
        swap(str[i], str[j]);
        printPermutations(str, i + 1);
    }
}

int main()
{

    // char input[100];
    // cin >> input;
    // print(input);
    // cout << '\n';
    // reversePrint(input);

    // cout << strLen(input);
    // replaceChar(input);
    // cout << input << '\n';

    // removeConsecutiveDuplicate(input);
    // cout << input << '\n';

    string input;
    cin >> input;
    string output = "";
    AllSubSequenceOfStr(input, output);

    return 0;
}