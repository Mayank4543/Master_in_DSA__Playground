#include <iostream>
using namespace std;
int binaryseacrch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
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
    return -1;
}
int main()
{
    int even[8] = {10, 11, 12, 13, 14, 15, 16, 18};
    int odd[5] = {10, 11, 12, 13, 14};
    int indexeven = binaryseacrch(even, 8, 12);
    cout << "Searching value at this index :" << indexeven << endl;
    int indexodd = binaryseacrch(odd, 5, 14);
    cout << "Searching value at this index :" << indexodd << endl;

    return 0;
}
// why we use binary search instead of linear search because  due to its time complextiy linear search has O(n) and binary search has O(logn)
// suppose if there 1000 value in an array are give  so linear search  is visiting all the element
// of the array so it cosume more time but in case binary search wwe can divide thethe array searching element is fullfilled their condition or not