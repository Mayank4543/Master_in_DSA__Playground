#include <iostream>
using namespace std;
// int gcd(int x, int y)
// {
//     if (y == 0)
//     {
//         return x;
//     }
//     else
//     {
//         return gcd(y, x % y);
//     }
// }
int modularExponential(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (1ll * (res) * (x) % m) % m;
        }
        x = (1ll * (x) % m * (x) % m);
        n = n >> 1;
    }
    return res;
}
int main()

{
    // int a, b;
    // cout << " Enter the values of a and b" << endl;
    // cin >> a;
    // cin >> b;
    // int value = gcd(a, b);
    // cout << "The hcf of the given number is: " << value << endl;
    int value = modularExponential(66, 5, 10000000);
    cout << "The modular expoential the given number is: " << value << endl;
    return 0;
}