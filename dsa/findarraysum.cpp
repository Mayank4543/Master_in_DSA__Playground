// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> reverse(vector<int> v)
// {
//     int s = 0;
//     int e = v.size() - 1;
//     while (s < e)
//     {
//         swap(v[s++], v[e--]);
//     }
//     return v;
// }
// vector<int> findsumarrya(vector<int> arr1, int n, vector<int> arr2, int m)
// {
//     int i = n - 1;
//     int j = m - 1;
//     vector<int> ans;
//     int carry = 0;
//     while (i >= 0 && j >= 0)
//     {
//         int val1 = arr1[i];
//         int val2 = arr2[j];
//         int sum = val1 + val2 + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
//     while (i >= 0)
//     {
//         int sum = arr1[i] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//     }
//     while (j >= 0)
//     {
//         int sum = arr2[j] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         j--;
//     }
//     while (carry != 0)
//     {
//         int sum = carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//     }
//     return reverse(ans);
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);

//     vector<int> v2;
//     v2.push_back(9);
//     v2.push_back(9);

//     vector<int> result = findsumarrya(v, 3, v2, 2);
//     cout << "The Finding array of sum is ";
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
vector<int> arrarotated(vector<int> a, int n, int k)
{
    vector<int> temp(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        temp[(i + k) % n] = a[i];
    }
    return temp;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    int k = 2;
    vector<int> result = arrarotated(v, 4, 2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}