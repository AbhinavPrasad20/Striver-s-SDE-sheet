#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     int temp[n]={0};
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         temp[arr[i]]++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(temp[i]>1)
//         {
//             cout<<i<<endl;
//             break;
//         }
//     }
// }

int main()
{
    int arr[5] = {1,3,4,2,4};
    int i=0;
    int slow=arr[0],fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(fast!=slow);
    slow=arr[0];
    while(slow!=fast)
    {
        fast=arr[fast];
        slow=arr[slow];
    }
    cout<<slow<<endl;
}