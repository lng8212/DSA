#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
int a[20][20];
bool unused[20][20];
int n;
void resetz()
{
    ans.clear();
    
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            unused[i][j] = false;
        }
    }
    unused[0][0]=true;
}
void Try(int i, int j, string s)
{
    if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
        return;
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(s);
        return;
    }
    if (i + 1 < n && a[i + 1][j] == 1 && unused[i + 1][j] == false)
    {
        unused[i + 1][j] = true;
        Try(i + 1, j, s + "D");
        unused[i + 1][j] = false;
    }
    if (j + 1 < n && a[i][j + 1] == 1 && unused[i][j + 1] == false)
    {
        unused[i][j + 1] = true;
        Try(i, j + 1, s + "R");
        unused[i][j + 1] = false;
    }
    if (j - 1 >= 0 && a[i][j - 1] == 1 && unused[i][j - 1] == false)
    {
        unused[i][j - 1] = true;
        Try(i, j - 1, s + "L");
        unused[i][j - 1] = false;
    }
    if (i - 1 >= 0 && a[i - 1][j] == 1 && unused[i - 1][j] == false)
    {
        unused[i - 1][j] = true;
        Try(i - 1, j, s + "U");
        unused[i - 1][j] = false;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        resetz();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(0, 0, "");
        if (ans.size() == 0)
        {
            cout << -1;
        }
        else
        {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}