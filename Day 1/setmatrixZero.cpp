#include<bits/stdc++.h>
using namespace std;
//1 1 1
//1 0 1
//1 1 1
int main()
{
    vector<vector<int>> arr={{0,1,1},{1,1,1},{1,1,1}};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                int next_i=i+1,next_j=j+1,prev_i=i-1,prev_j=j-1;

                while(next_i<3)
                {
                    if(arr[next_i][j]!=0)
                    arr[next_i][j]=-1;
                    next_i++;
                }
                while(next_j<3)
                {
                    if(arr[i][next_j]!=0)
                    arr[i][next_j]=-1;
                    next_j++;
                }
                while(prev_i>=0)
                {
                    if(arr[prev_i][j]!=0)
                    arr[prev_i][j]=-1;
                    prev_i--;
                }
                while(prev_j>=0)
                {
                    if(arr[i][prev_j]!=0)
                    arr[i][prev_j]=-1;
                    prev_j--;
                }
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]<=0)
            arr[i][j]=0;
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}