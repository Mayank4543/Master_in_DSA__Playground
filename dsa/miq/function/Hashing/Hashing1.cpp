#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()

{
    // Number hashing in which max array size is 10^6 if it is exceed it will not work but u can do globally 1e7
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int hash[13] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]] += 1;
    // }
    // int q;
    // cout << "Enter the value of q:";
    // cin >> q;
    // while (q--)
    // {
    //     int number;
    //     cin >> number;
    //     cout << hash[number] << endl;
    // }
    // string hashing maximum size it take 256 in which it will include all uppercase and lowercase character
    // string s;
    // cout << "Enter the value of character" << endl;
    // cin >> s;
    // int hash[256] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i]]++;
    // }
    // by using map
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int e;
    cin >> e;
    while (e--)
    {
        int c;
        cin >> c;
        cout << mpp[c] << endl;
    }
    return 0;
}