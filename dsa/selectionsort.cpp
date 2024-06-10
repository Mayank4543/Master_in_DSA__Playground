#include <iostream>
using namespace std;
void selectionsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minindex])
            {
                minindex = j;
            }
        }
        swap(a[minindex], a[i]);
    }
}
int main()
{
    int arr[4] = {7, 4, 1, 2};

    selectionsort(arr, 4);
    cout << "Sorted array: ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}