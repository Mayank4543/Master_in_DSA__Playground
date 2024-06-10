// #include <iostream>

// using namespace std;
// void mergesort(int arr1[], int n, int arr2[], int m, int arr3[])
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//     }
//     while (j < m)
//     {
//         arr3[k++] = arr2[j++];
//     }
// }
// void print(int arr3[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr3[i] << "";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr1[7] = {1, 3, 5, 6, 7, 8, 9};
//     int arr2[4] = {2, 4, 10, 12};
//     int arr3[11] = {0};
//     mergesort(arr1, 7, arr2, 4, arr3);
//     print(arr3, 11);
//     return 0;
// }
// #include <iostream>

// using namespace std;
// void mergesort(int arr1[], int n, int arr2[], int m)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr1[k++] = arr1[i++];
//         }
//         else
//         {
//             arr1[k++] = arr2[j++];
//         }
//     }
//     while (i < n)
//     {
//         arr1[k++] = arr1[i++];
//     }
//     while (j < m)
//     {
//         arr1[k++] = arr2[j++];
//     }
// }
// void print(int arr3[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr3[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr1[3] = {1, 2, 3, 0, 0, 0};
//     int arr2[3] = {2, 5, 6};
//     arr1[6] = {0};

//     mergesort(arr1, 3, arr2, 3);
//     print(arr1, 6);
//     return 0;
// }
// moves zero the right place and all the number in left place in a sequence

#include <iostream>
using namespace std;
void moveszero(int arr[], int n)
{
    int nonzero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[nonzero]);
            nonzero++;
        }
    }
}
int main()
{
    int arr[6] = {12, 0, 3, 0, 4, 0};
    moveszero(arr, 6);
    cout << "moves zero is at right place ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}