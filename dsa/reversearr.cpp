#include <iostream>
#include <vector>
using namespace std;
// void reverse(int a[], int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         swap(a[i], a[n - i - 1]);
//     }
// }
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "";
    }
    cout << endl;
}
int main()
{
    // int ar[7] = {2, 1, 4, 5, 78, 8, 11};
    // // 5412
    // reverse(ar, 7);
    // cout << "The reversed array is ";
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    // cout << endl;
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);

    v.push_back(12);
    v.push_back(4);
    vector<int> ans = reverse(v);
    print(ans);

    return 0;
}
