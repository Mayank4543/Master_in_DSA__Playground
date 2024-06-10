#include <iostream>
using namespace std;
int getpivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int sqrt(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;

    int ans = -1;
    while (s <= e)
    {
        // 144<363
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {

            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int binaryseacrch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
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
int targetelement(int arr[], int n, int k)
{
    int pivot = getpivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binaryseacrch(arr, pivot, n - 1, k);
    }
    else
    {
        return binaryseacrch(arr, 0, pivot - 1, k);
    }
}
double moreprecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int arr[6] = {19, 20, 21, 1, 2};
    // int n;
    // cout << "enter the number " << endl;
    // cin >> n;

    // int temp = sqrt(n);
    // cout << "The Square root of number is  " << moreprecision(n, 3, temp) << endl;

    int pivot = getpivot(arr, 6);
    cout << "pivot element is at index" << pivot << endl;
    int searching = targetelement(arr, 6, 21);
    cout << "The target element is at index:" << searching << endl;

    return 0;
}