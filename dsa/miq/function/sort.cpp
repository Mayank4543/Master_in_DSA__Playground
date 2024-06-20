#include <iostream>
#include <vector>
using namespace std;
void sorted(vector<int> &nums)
{
    // int zeroes = 0, ones = 0, two = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] == 0)
    //     {
    //         zeroes++;
    //     }
    //     else if (nums[i] == 1)
    //     {
    //         ones++;
    //     }
    //     else
    //     {
    //         two++;
    //     }
    // }
    // int i = 0;
    // while (zeroes--)
    // {
    //     nums[i] = 0;
    //     i++;
    // }
    // while (ones--)
    // {
    //     nums[i] = 1;
    //     i++;
    // }
    // while (two--)
    // {
    //     nums[i] = 2;
    //     i++;
    // }
    // cout << "After sorting" << endl;
    // int l = 0;
    // int n = 0;
    // int r = nums.size() - 1;
    // while (n <= r)
    // {
    //     /* code */

    //     if (nums[n] == 0)
    //     {

    //         swap(nums[l], nums[n]);
    //         l++;
    //         n++;
    //     }
    //     else if (nums[n] == 1)
    //     {

    //         n++;
    //     }
    //     else
    //     {
    //         swap(nums[r], nums[n]);

    //         r--;
    //     }
    // }
    // T.C=O(N)
    // S.C=O(1)
    // Dutch NAtional algorithm;
    int l = 0;
    int h = nums.size() - 1;
    while (l < h)
    {
        if (nums[l] < 0)
        {
            l++;
        }
        else if (nums[h] > 0)
        {
            h--;
        }
        else
        {
            swap(nums[l], nums[h]);
        }
    }
};

int main()
{
    // vector<int> nums = {0, 1, 0, 2, 1, 0, 2, 0};
    // DutchNational Flag algorithm (2 pointer approach)
    vector<int> nums = {2, 3, 4, -1, 4, -2, 4, -5, 8, -7};
    // sorted(nums);
    sorted(nums);
    for (int number : nums)
    {
        cout << number << " ";
    }
    return 0;
}
