#include <iostream>
#include <vector>

using namespace std;
int MinimumConsecutiveKflips(vector<int> &nums, int k)
{

    int n = nums.size();
    int flip = 0;
    int flipcountpast = 0;
    vector<bool> isFlipped(n, false);
    for (int i = 0; i < n; i++)
    {
        if (i >= k && isFlipped[i - k] == true)
        {
            flipcountpast--;
        }
        if (flipcountpast % 2 == nums[i])
        {
            if (i + k > n)
                return -1;

            flipcountpast++;
            flip++;
            isFlipped[i] = true;
        }
    }
    return flip;
}
int main()
{
    vector<int> nums = {0, 0, 0, 1, 0, 1, 1, 0};
    cout << MinimumConsecutiveKflips(nums, 3);

    return 0;
}