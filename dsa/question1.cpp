#include <iostream>
using namespace std;
int main()
{

    // for (int i = 0; i < 5; i--)
    // {
    //     cout <<a2 i << "";
    //     i++;
    // }
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << "";
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }
    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << i << " ";
    //     i++;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)

    //     {
    //         if (i + j == 10)
    //         {
    //             break;
    //         }
    //         cout << i << "" << j << endl;
    //     }
    // }
    // int a = 0;
    // int b = 1;
    // cout << a << "" << b << "";
    // for (int i = 0; i < 10; i++)
    // {
    //     int nextnumber = a + b;
    //     cout << nextnumber << "";
    //     a = b;
    //     b = nextnumber;
    // }
    int n;
    cin >> n;
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int subtract = product - sum;
    cout << subtract << endl;
}