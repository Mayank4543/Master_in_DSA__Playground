#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;
// bool findkey(int arr[][3], int rows, int col, int key)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == key)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int findMax(int arr[][3], int rows, int col)
// {
//     int maxxi = arr[0][0];
//     // int minim=arr[3][3];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < col; j++)

//         {
//             // if (arr[i][j] < minim)
//             // {
//             //     minim = arr[i][j];
//             //     // maxxi++;
//             // }
//             if (arr[i][j] > maxxi)
//             {
//                 maxxi = arr[i][j];
//                 // maxxi++;
//             }
//         }
//     }
//     return maxxi;
// }
// int minimum(vector<int> &nums)
// {
//     int min = nums[0];
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] < min)
//         {
//             min = nums[i];
//         }
//     }
//     return min;
// }
// int main()
// {
//     //  reverse an array
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int n = sizeof(arr) / sizeof(int);
//     int left = 0;
//     int right = n - 1;

//     // while (true)
//     // {
//     //     if (left > right)
//     //         break;
//     //     cout << arr[left];
//     //     cout << arr[right];
//     //     left++;
//     //     right--;
//     // }
//     // 2D aRRay

//     int arr1[3][3] = {{10, 2, 3}, {5, 6, 0}, {7, 8, 7}};
//     vector<int> mini = {8, 4, 2, 7};
//     cout << "mini" << minimum(mini);
//     // by using vector
//     vector<vector<int>>
//         v;
//     vector<int> a{1, 2, 3};
//     vector<int> b{3, 4, 3};
//     vector<int> c{5, 6, 7};
//     v.push_back(a);
//     v.push_back(b);
//     v.push_back(c);
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     for (int j = 0; j < v[0].size(); j++)
//     //     {
//     //         cout << v[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     int arr2[] = {0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
//     int n1 = sizeof(arr2) / sizeof(int);
//     // for (int i = 0; i < n1; i++)
//     // {
//     //     if (arr2[i] == 1)
//     //     {
//     //         cout << arr2[i];
//     //     }
//     //     else
//     //     {
//     //         cout << arr2[i];
//     //     }
//     // }

//     // cout << "Printing row wise :" << endl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     int sum = 0;
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         // cout << arr1[i][j] << " ";
//     //         cout << "printing sum of element row wise:" << endl;
//     //         sum += arr1[i][j];
//     //         cout << sum;
//     //     }
//     //     cout << endl;
//     // }
//     // cout << "Printing coloumn wise :" << endl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     int sum = 0;
//     //     for (int j = 0; j < 3; j++)
//     //     {

//     //         // cout << arr1[j][i] << " ";
//     //         sum = sum + arr1[j][i];
//     //     }
//     //     cout << sum << endl;
//     // }
//     // int key = 10;
//     // int findelement = findkey(arr1, 3, 3, key);
//     // cout << findelement;
//     // int findmax = findMax(arr1, 3, 3);
//     // cout << "The Minimum value" << findmax;

//     return 0;
// }
// class Solution
// {
// public:
//     bool threeConsecutiveOdds(vector<int> &arr)
//     {
//         int count = 0;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if (arr[i] % 2 != 0)
//             {
//                 count++;
//                 if (count == 3)
//                 {
//                     return true;
//                 }
//             }

//             else
//             {
//                 count = 0;
//             }
//         }

//         return false;
//     }
// };
// int findfirstrepeat(int arr[], int n){
//     unordered_map<int, int> hash;
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (hash[arr[i]] > 1)
//         {
//             return i + 1;
//         }
//     }
//     return -1;
// }
vector<int> commonsortedelement(int a1[], int a2[], int a3[], int n1, int n2, int n3)
{
    vector<int> ans;
    set<int> st;
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a1[i] == a2[j] && a2[j] == a3[k])
        {
            st.insert(a1[i]);
            i++, j++, k++;
        }
        else if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a2[j] < a3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}
int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int arr1[] = {3, 3, 3, 3, 3};
    int n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {3, 3, 3, 3, 3};
    int n2 = sizeof(arr2) / sizeof(int);
    int arr3[] = {3, 3, 3, 3, 3};
    int n3 = sizeof(arr3) / sizeof(int);
    // cout << findfirstrepeat(arr, n);
    vector<int> result;
    result = commonsortedelement(arr1, arr2, arr3, n1, n2, n3);
    for (int i : result)
    {
        cout << i;
    }

    return 0;
}