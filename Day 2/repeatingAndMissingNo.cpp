#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={3,1,2,5,4,6,7,5};
    int l=a.size();
    int b[l+1]={0};
    int ans[2];
  
    for(int i=0;i<l;i++)
    {
        b[a[i]]++;
    }

    for(int i=0;i<=l;i++)
    {
        if(b[i]>1)
        ans[0]=i;

        if(b[i]==0 && i>0)
        ans[1]=i;
    }      

    cout<<ans[0]<<" "<<ans[1];
}