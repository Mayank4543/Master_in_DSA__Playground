#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSatisfied(std::vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        int initialSatisfaction = 0;
        int maxExtraSatisfaction = 0;
        int currentWindowSatisfaction = 0;

        for (int i = 0; i < customers.size(); ++i)
        {
            if (grumpy[i] == 0)
            {
                initialSatisfaction += customers[i];
            }
            else if (i < minutes)
            {
                currentWindowSatisfaction += customers[i];
            }
        }

        maxExtraSatisfaction = currentWindowSatisfaction;

        for (int i = minutes; i < customers.size(); ++i)
        {
            currentWindowSatisfaction += customers[i] * grumpy[i];
            currentWindowSatisfaction -= customers[i - minutes] * grumpy[i - minutes];
            maxExtraSatisfaction = max(maxExtraSatisfaction, currentWindowSatisfaction);
        }

        return initialSatisfaction + maxExtraSatisfaction;
    }
};
// I M providing sliding problem question
int MaximumSumsubarray(vector<int> &nums, int k)
{
    int sum = 0;
    int j = 0;
    int i = 0;
    int max_sum = 0;
    while (j < nums.size())
    {
        sum += nums[j];
        if (j - i + 1 < k)
        {

            j++;
        }
        else if (j - i + 1 == k)
        {
            max_sum = max(max_sum, sum);
            sum = sum - nums[i];
            i++;
            j++;
        }
        }
    return max_sum;
}
int main()
{
    Solution obj1;
    vector<int> customers = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
    vector<int> arr = {2, 5, 1, 8, 2, 9};
    int m = 3;
    // cout << obj1.maxSatisfied(customers, grumpy, m);
    cout << MaximumSumsubarray(arr, m);

    return 0;
}