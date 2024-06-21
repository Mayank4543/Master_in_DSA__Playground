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
int findDuplicate(vector<int> &nums)
{
    // TC =O(NlogN);
    // std::sort(nums.begin(), nums.end());
    // for (int i = 0; i < nums.size() - 1; i++)
    // {
    //     if (nums[i] == nums[i + 1])
    //         return nums[i];
    // }
    // return -1;
    // Already Visited If the negative number assign
    // TC =O(N);
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0)
        {
            ans = index;
        }
        else
        {
            nums[index] *= -1;
        }
    }
    return ans;
    // TC =O(N);
    // SC=O(1);
    // while (nums[0] != nums[nums[0]])
    // {
    //     swap(nums[0], nums[nums[0]]);
    // }
    // return nums[0];
}
void findMIssingFromDupliacte(vector<int> &nums)
{

    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index - 1] > 0)
        {
            nums[index - 1] *= -1;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
    // sorted and TC is O(1)
    // int i = 0;

    // while (i < nums.size())
    // {
    //     int index = nums[i] - 1;
    //     if (nums[i] != nums[index])
    //     {
    //         swap(nums[i], nums[index]);
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] != i + 1)
    //         cout << i + 1 << " ";
    // }
}

int main()
{
    // vector<int> nums = {0, 1, 0, 2, 1, 0, 2, 0};
    // DutchNational Flag algorithm (2 pointer approach)
    // vector<int> nums = {2, 3, 4, -1, 4, -2, 4, -5, 8, -7};
    vector<int> nums1 = {3, 3, 1, 2, 5, 4};
    vector<int> nums2 = {1, 3, 5, 3, 4};
    // sorted(nums);
    // sorted(nums);
    // cout << findDuplicate(nums1) << endl;
    findMIssingFromDupliacte(nums2);
    // for (int number : nums1)
    // {
    //     cout << number << " ";
    // }
    return 0;
}
        