#include <iostream>
#include <vector>

using namespace std;
bool findkey(int arr[][3], int rows, int col, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int findMax(int arr[][3], int rows, int col)
{
    int maxxi = arr[0][0];
    // int minim=arr[3][3];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)

        {
            // if (arr[i][j] < minim)
            // {
            //     minim = arr[i][j];
            //     // maxxi++;
            // }
            if (arr[i][j] > maxxi)
            {
                maxxi = arr[i][j];
                // maxxi++;
            }
        }
    }
    return maxxi;
}
int main()
{
    // reverse an array
    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int n = sizeof(arr) / sizeof(int);
    // int left = 0;
    // int right = n - 1;

    // while (true)
    // {
    //     if (left > right)
    //         break;
    //     cout << arr[left];
    //     cout << arr[right];
    //     left++;
    //     right--;
    // }
    // 2D aRRay

    int arr1[3][3] = {{10, 2, 3}, {5, 6, 0}, {7, 8, 7}};
    // by using vector
    vector<vector<int>> v;
    vector<int> a{1, 2, 3};
    vector<int> b{3, 4, 3};
    vector<int> c{5, 6, 7};
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    int arr2[] = {0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    int n = sizeof(arr2) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == 1)
        {
            cout << arr2[i];
        }
        else
        {
            cout << arr2[i];
        }
    }

    // cout << "Printing row wise :" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         // cout << arr1[i][j] << " ";
    //         cout << "printing sum of element row wise:" << endl;
    //         sum += arr1[i][j];
    //         cout << sum;
    //     }
    //     cout << endl;
    // }
    // cout << "Printing coloumn wise :" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {

    //         // cout << arr1[j][i] << " ";
    //         sum = sum + arr1[j][i];
    //     }
    //     cout << sum << endl;
    // }
    int key = 10;
    int findelement = findkey(arr1, 3, 3, key);
    cout << findelement;
    int findmax = findMax(arr1, 3, 3);
    cout << "The Minimum value" << findmax;

    return 0;
}