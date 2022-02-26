#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={0,1,2,0,2,1,1,0};
    int start=0,end=arr.size()-1,mid=0;
    int i=0;
    while(mid<end)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[start]);
            mid++;
            start++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[end]);
            end--;
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}