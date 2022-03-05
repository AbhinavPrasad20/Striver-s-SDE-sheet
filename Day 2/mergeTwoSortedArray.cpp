// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int arr1[n];
//     int arr2[m];

//     for(int i=0;i<n;i++)
//     cin>>arr1[i];
//     for(int i=0;i<m;i++)
//     cin>>arr2[i];

//     for(int i=0;i<n;i++)
//     {
//         if(arr1[i]>arr2[0])
//         swap(arr1[i],arr2[0]);

//         sort(arr2,arr2+m);
//     }

//     for(int i=0;i<n;i++)
//     cout<<arr1[i]<<" ";
//     cout<<endl;
//     for(int i=0;i<m;i++)
//     cout<<arr2[i]<<" ";

// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    int gap = ceil((float)(n + m) / 2);

    while (gap > 0)
    {
        int i = 0;
        int j = gap;
        while (j < (m + n))
        {
            if (j < n && arr1[i] > arr1[j])
                swap(arr1[i], arr1[j]);
            else if (j >= n && i < n && arr1[i] > arr2[j-n])
                swap(arr1[i], arr2[j-n]);
            else if (j>=n && i >= n && arr2[i-n] > arr2[j-n])
                swap(arr2[i-n], arr2[j-n]);
            i++;
            j++;
        }
        if(gap == 1)
        gap=0;
        else
        gap = ceil((float)gap / 2);
    }

    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    cout << endl;
    for (int i = 0; i < m; i++)
        cout << arr2[i] << " ";
}