#include <iostream>
using namespace std;
void spiralmatrix(int arr[r][c], int m,int n)
{
    int startingrowindex=0;
    int startingcolindex=0;
    while (startingrowindex<m&&startingcolindex<n)
    {
       if(startingrowindex<m){
        for(int i=startingrowindex;i<m;i++){
            
        }
       }
    }
    

}
int main()
{   int r,c;
    int arr[r][c] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ans[3][3] = {0};
    spiralmatrix(r,c,arr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}