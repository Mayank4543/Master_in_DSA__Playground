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
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    double ans = squaroot(n);
    int precesion;

    cout << "Enter the floating numbers :";
    cin >> precesion;
    double step = 0.1;
    for (int i = 0; i < precesion; i++)
    {
        for (double j = ans; j * j <= n; j = j + step)
        {
            ans = j;
        }
        step = step / 10;
    }
    cout << ans;
    return 0;
}
// 3 + 0.1 = 3.1 * 3.1 = 10 3 + 0.2 = 3.2 * 3.2 = 10