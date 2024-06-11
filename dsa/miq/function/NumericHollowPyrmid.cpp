#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            if (col == 0 || col == row || row == n - 1)
            {
                cout << col + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {

        for (int col = row; col < n; col++)
        {
            if (row == 0 || col == row || col == n - 1)
            {
                cout << col + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Printing the double of array";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << 2 * arr[i];
    // }
    return 0;
}