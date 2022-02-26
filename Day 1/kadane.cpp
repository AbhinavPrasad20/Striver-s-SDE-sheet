#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &n, int *start, int *end)
{
    int currsum = 0, maxsum = n[0];
    int s = 0;
    for (int i = 0; i < n.size(); i++)
    {
        currsum += n[i];
        if (currsum >= maxsum)
        {
            maxsum = currsum;
            *start=s;
            *end=i;
        }
        if (currsum < 0)
        {
            currsum = 0;
            s = i + 1;
        }
    } 
    return maxsum;
}

int main()
{ 
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    int start,end;
    int lon = maxSubArray(arr,&start,&end);
    cout << "The longest subarray with maximum sum is " << lon << endl;
    cout << "The subarray is " << endl;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
}
