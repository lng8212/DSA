#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[30];
int x[200];
vector<vector<int> > ans;
void init()
{
    ans.clear();
    cin >> n >> k;
    x[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}
void Try(int i, int s)
{
    if (s == k)
    {
        vector<int> tmp;
        for (int j = 1; j < i; j++)
        {
            tmp.push_back(a[x[j]]);
        }
        ans.push_back(tmp);
    }
    for (int j = x[i-1]; j <= n; j++)
    {
        if (s + a[j] <= k)
        {
            x[i] = j;
            Try(i + 1, s + a[j]);
        }
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        init();
        Try(1, 0);

        if (ans.size() == 0)
            cout << "-1";
        else
        {
            cout << ans.size() << " ";
            for (int i = 0; i < ans.size(); i++)
            {
                cout << "{";
                for (int j = 0; j < ans[i].size() - 1; j++)
                {
                    cout << ans[i][j] << " ";
                }
                cout << ans[i][ans[i].size() - 1] << "} ";
            }
        }
        cout << endl;
    }

    return 0;
}