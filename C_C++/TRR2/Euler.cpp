#include <bits/stdc++.h>
using namespace std;

int n, t;
int a[100][100];
vector<int> ans;
void init()
{
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Euler(int i)
{
    stack<int> kq;
    kq.push(i);
    while (kq.size() > 0)
    {
        int k = kq.top();
        bool check = 1;
        for (int z = 1; z <= n; z++)
        {
            if (a[k][z] == 1)
            {
                kq.push(z);
                a[k][z] = 0;
                a[z][k] = 0;
                check = 0;
                break;
            }
        }

        if (check == 1)
        {
            kq.pop();
            ans.push_back(k);
        }
    }
}
int main()
{

    init();
    Euler(t);
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }

    return 0;
}