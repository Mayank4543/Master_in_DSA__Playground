#include <iostream>
using namespace std;
int firstoccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastoccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[6] = {10, 12, 13, 16, 16, 16};
    int index = firstoccurance(arr, 6, 16);
    cout << "The first occurance element at index: " << index << endl;
    int index2 = lastoccurance(arr, 6, 16);
    cout << "The last occurance element at index: " << index2 << endl;
    return 0;
}
//  peak mein element find karna hain is just like a mountain
int peakvalue(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
// int main()
// {

//     int arr[8] = {3, 4, 5, 6, 7, 2, 1, 0};
//     int index = peakvalue(arr, 8);
//     cout << " Highest value " << index << endl;
//     return 0;
// }
// //           6
// //        5     1
// //      4         2
// //    3
