#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // int arr[13] = {0};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     arr[v[i]] = arr[v[i]] + 1;
    // }
    // for (int i = 0; i < 13; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // string s = "sdfvafadez";

    // int arr[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     arr[int(s[i]) - 97]++;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    map<int, int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }

    cout << mpp[1] << endl;

    return 0;
}