#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    vector<vector<int>> arr(rows);

    for (int i = 0; i < rows; i++)
    {
        arr[i].resize(i+1);
        arr[i][0]=arr[i][i]=1;

        for(int j=1;j<i;j++)
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}