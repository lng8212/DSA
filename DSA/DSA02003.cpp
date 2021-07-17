#include <bits/stdc++.h>
using namespace std;
int n;
int a[20][20];
vector<string> ans;
bool check = false;
void Try(int i, int j, string kq)
{
    if (i==1 && j==1 &&a[i][j]==0){
        check = false;
        return;
    }
    if (i == n && j == n)
    {
        check = true;
        ans.push_back(kq);
        return;
    }
    if (i + 1 <= n && a[i + 1][j] == 1)
    {

        Try(i + 1, j, kq + "D");
    }
    if (j + 1 <= n && a[i][j + 1] == 1)
    {
        Try(i, j + 1, kq + "R");
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        check = false;
        ans.clear();
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(1, 1,"");
        if (check == false)
            cout << "-1" << endl;
        else
        {
            sort (ans.begin(),ans.end());
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}