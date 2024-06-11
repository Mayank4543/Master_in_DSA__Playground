#include <iostream>

using namespace std;
int fourSum(int nums[], int size, int target)
{

    int n = size;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (nums[i] + nums[j] + nums[k] + nums[l] == target)
                    {
                        return {i};
                    }
                }
            }
        }
    }
    return {};
}
int main()
{

    return 0;
}