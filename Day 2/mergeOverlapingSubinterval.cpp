#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};

    vector<vector<int>> ans;
    for (int i = 0; i < a.size(); i++)
    {
        if (ans.empty() || ans.back()[1] < a[i][0])
        {
            ans.push_back(a[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], a[i][1]);
        }
    }

    for (auto it : ans)
    {
        cout << it[0] << " " << it[1] << "\n";
    }
}