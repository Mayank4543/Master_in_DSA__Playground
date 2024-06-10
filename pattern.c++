// print
// *
// **
// ***
// *****

#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // 1
    // 22
    // 333
    // 4444
    // int row = 1;

    // for (row = 1; row <= n; row++)
    // {

    //     for (int coloumn = 1; coloumn <= row; coloumn++)
    //     {

    //         cout << row;
    //     }
    //     cout << endl;
    // }
    // 1
    // 23
    // 456
    // 78910
    // int row = 1;
    // int count = 0;
    // while (row <= n)
    // {
    //     int col = 1;

    //     while (col <= row)
    //     {
    //         count = count + 1;
    //         cout << count;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    // 1
    // 23
    // 345
    // 4567
    // 56789
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout << value;
    //         value = value + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << (row - col + 1);
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    // ABCD
    // ABCD
    // ABCD
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    // ABC
    // DEF
    // GHI
    // char value = 'A';
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         value = value + 1;
    //         cout << value;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    // int row;
    // cin >> row;
    // for (int i = row; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= row - i - 1; j++)
    //     {

    //         cout << "*";
    //     }
    //     cout << endl;
    // // } formula****
    //             ***
    //             **
    //             * for N+1-r
    int n;
    cin >> n;
    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j <= n; j++)
    //     {
    //         cout << "#";
    //     }
    //     cout << endl;
    // }
    // 1
    // 12
    // 123
    // 1234
    // 12345
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {

    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j <= n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // 1
    // 22
    // 333
    // 4444
    // 55555
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    //
    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count;
    //         count++;
    //     }
    //     cout << endl;
    // }
    // ABCD
    // BCDE
    // CDEF
    // DEFG
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n; col++)
    //     {
    //         char ch = 'A' + row + col - 2;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }
    // A
    // BB
    // CCC
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }
    // A
    // BC
    // DEF
    // GHIJ
    // KLMNO
    // char count = 'A' - 1;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         count = count + 1;
    //         cout << count;
    //     }
    //     cout << endl;
    // }
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         char ch = 'A' + row + col - 2;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }
    // for (int row = 1; row <= n; row++)

    // {
    //     char start = 'A' + n - row;
    //     for (int col = 1; col <= row; col++)
    //     {

    //         cout << start;
    //         start = start + 1;
    //     }
    //     cout << endl;
    // }
    //     *
    //    **
    //   ***
    //  ****
    // *****
    // for (int row = 1; row <= n; row++)
    // {
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space = space - 1;
    //     }
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    int i;
    cout << i;
}
