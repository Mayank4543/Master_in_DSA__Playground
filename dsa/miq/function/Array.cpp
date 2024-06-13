#include <iostream>

using namespace std;
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    int left = 0;
    int right = n - 1;

    while (true)
    {
        if (left > right)
            break;
        cout << arr[left];
        cout << arr[right];
        left++;
        right--;
    }
    // reverse an array

    return 0;
}