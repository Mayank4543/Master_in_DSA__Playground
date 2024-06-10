#include <iostream>
using namespace std;
void wavematric(int arr[][3], int ans[][3])
{

    for (int col = 0; col < 3; col++)
    {
        if (col & 1)
        {
            for (int row = 2; row >= 0; row--)
            {
                ans[row][col] = arr[2 - row][col];
            }
        }
        else
        {
            for (int row = 0; row < 3; row++)
            {
                ans[row][col] = arr[row][col];
            }
        }
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ans[3][3] = {0};

    wavematric(arr, ans);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}