#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,5,3,6,4,7};
    int max=arr[0],min=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            max=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    cout<<max-min<<endl;
}