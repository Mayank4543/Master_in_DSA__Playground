#include <iostream>
using namespace std;
// find peak elemenet in the given array
int peakElem(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                return arr[i];
            }
        }
    }
}
int transposearr(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j >= i; j--)

        {
                }
    }
}
int main()
{
    int arr[6] = {12, 13, 20, 15, 14};
    int value = peakElem(arr, 6);
    cout << value << endl;
    return 0;
}