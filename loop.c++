#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //     //     int a = 9;
    //     //     if (a == 9)
    //     //     {
    //     //         cout << "Nine";
    //     //     }
    //     //     if (a > 0)
    //     //     {
    //     //         cout << "Number is positive ";
    //     //     }
    //     //     else
    //     //     {
    //     //         cout << "Negative";
    //     //     }
    //     // int a = 2;
    //     // int b = a + 1;
    //     // if ((a = 3) == b)
    //     // {
    //     //     cout << a;
    //     // }
    //     // else
    //     // {
    //     //     cout << a + 1;
    //     // }
    //     // int a = 24;
    //     // if (a > 20)
    //     // {
    //     //     cout << "Love";
    //     // }
    //     // else if (a == 24)
    //     // {
    //     //     cout << "Lovely";
    //     // }
    //     // else
    //     // {
    //     //     cout << "Babbar";
    //     // }
    //     int row, col;
    //     cin >> row >> col;
    //     // for (int i = 2; i < n; i++)
    //     // {
    //     //     if (n % i == 0)
    //     //     {
    //     //         cout << "Numberis not prime for" << i << endl;
    //     //     }
    //     //     else
    //     //     {
    //     //         cout << "Number is prime ";
    //     //     }
    //     // }
    //     // for (int i = 1; i <= row; i++)
    //     // {
    //     //     for (int j = 1; j <= col; j++)
    //     //     {
    //     //         cout << "*";
    //     //     }
    //     //     cout << endl;
    //     // }
    //     // for (int i = 1; i <= row; i++)
    //     // {
    //     //     for (int j = 1; j <= col; j++)
    //     //     {
    //     //         if (i == 1 || i == row || j == 1 || j == col)
    //     //         {
    //     //             cout << "*";
    //     //         }
    //     //         else
    //     //         {
    //     //             cout << "";
    //     //         }
    //     //     }
    //     //     cout << endl;
    //     // }

    //     // ABC
    //     // BCD
    //     // CDE
    // }
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value;
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}