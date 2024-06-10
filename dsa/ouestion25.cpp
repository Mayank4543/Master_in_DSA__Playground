#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout << *p;
    // cout << *arr + 9;
    char b[] = "xyz";
    char *c = &b[0];

    cout << c << *c << endl;
    return 0;
}