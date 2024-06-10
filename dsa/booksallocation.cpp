#include <iostream>
using namespace std;
bool ispossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int bookallocation(int arr[], int n, int m)
{
    int s = 0;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}
int main()
{
    int arr[4] = {5, 5, 5, 5};
    int minimumpages = bookallocation(arr, 4, 2);
    cout << "maximum number of pages assigned to student is minimum" << minimumpages << endl;
    return 0;
}
// #include <iostream>
// #include <vector>

// using namespace std;

// bool isPossibleSol(vector<int> &boards, int n, int k, int mid)
// {
//     int painter = 1;
//     int boardsPainted = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (boardsPainted + boards[i] <= mid)
//         {
//             boardsPainted = boardsPainted + boards[i];
//         }
//         else
//         {
//             painter++;
//             if (painter > k || boards[i] > mid)
//             {
//                 return false;
//             }
//             boardsPainted = boards[i];
//         }
//     }
//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int s = 0;
//     int sum = 0;
//     int n = boards.size();
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + boards[i];
//     }
//     int e = sum;
//     int mid = s + (e - s) / 2;
//     int ans = -1;

//     while (s <= e)
//     {
//         if (isPossibleSol(boards, n, k, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int arr[4] = {5, 5, 5, 5};
//     int painter = 2;

//     // Convert array to vector
//     vector<int> boards(arr, arr + sizeof(arr) / sizeof(arr[0]));

//     int result = findLargestMinDistance(boards, painter);

//     cout << "The largest minimum distance is: " << result << endl;

//     return 0;
// }
