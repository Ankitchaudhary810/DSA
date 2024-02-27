using namespace std;
#include <bits/stdc++.h>
#include <iostream>

int main()
{

    vector<int> *vp = new vector<int>(); // dynamic

    vector<int> v; // static vector

    vector<int> vs(10, -2); // vector size is 10 and all the element is -2;

    v.push_back(10); // add element from the back;
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);

    v.pop_back(); // remove the last element;

    // cout << v.at(3) << '\n';

    // cout << v[0] << '\n';
    // cout << v[1] << '\n';
    // cout << v[2] << '\n';
    // cout << v[3] << '\n';
    // cout << v[4] << '\n';

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.capacity() << '\n';
        cout << v[i] << '\n';
        // cout << v.at(i) << '\n'; // another way to print the values;
    }

    for (int i = 0; i < vs.size(); i++)
    {
        // cout << vs.capacity() << '\n';
        cout << vs[i] << '\n';
        // cout << v.at(i) << '\n'; // another way to print the values;
    }

    return 0;
}