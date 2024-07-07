#include <iostream>
using namespace std;

int squaroot(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
bool Two_D_Array(int arr[][4], int rows, int col, int target)
{
    int s = 0;
    int e = rows * col - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int rowise = mid / col;
        int colwise = mid % col;
        int element = arr[rowise][colwise];
        if (element = target)

        {
            cout << "found at index:" << rowise << colwise;
            return true;
        }
        else if (element > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}
int main()
{
    // int n;
    // cout << "Enter the number :";
    // cin >> n;
    // double ans = squaroot(n);
    // int precesion;

    // cout << "Enter the floating numbers :";
    // cin >> precesion;
    // double step = 0.1;
    // for (int i = 0; i < precesion; i++)
    // {
    //     for (double j = ans; j * j <= n; j = j + step)
    //     {
    //         ans = j;
    //     }
    //     step = step / 10;
    // }
    // cout << ans;
    int ar[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int rows = 5;
    int col = 4;
    Two_D_Array(ar, rows, col, 10);

    return 0;
}
