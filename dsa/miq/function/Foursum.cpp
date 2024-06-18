#include <iostream>
#include <vector>
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
    vector<int> arr{10, 20, 30, 40, 50, 60, 70};
    int target = 100;
    for (int i = 0; i < arr.size(); i++)

    {
        int element1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];
            for (int k = j + 1; k < arr.size(); k++)
            {
                int element3 = arr[k];
                for (int l = k + 1; l < arr.size(); l++)
                {
                    int element4 = arr[l];
                    if (element1 + element2 + element3 + element4 == target)
                    {
                        cout << "Pair found:" << element1 << " " << element2 << " " << element3 << " " << element4 << "  ";
                    }
                }
            }
        }
    }
    return 0;
}