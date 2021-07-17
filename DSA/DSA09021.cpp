#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
vector<vector<int> > ans(1001);
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                ans[i].push_back(j);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j]+1 << " ";
        }
        cout << endl;
    }

    return 0;
}