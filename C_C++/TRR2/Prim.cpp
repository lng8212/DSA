#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int n, start;
int v[101];
int vh[101];
int ans;
vector<int> kq;
void init()
{
    ans = 0;
    memset(vh, 0, sizeof(vh));
    cin >> n >> start;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        v[i] = 1;
    }
    v[start] = 0;
    vh[start] = 1;
}
bool checkz()
{
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 1)
            return false;
    }
    return true;
}
void findt(int &x, int &y)
{
    int minz = 99999;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (vh[i] == 1 && v[j] == 1)
            {
                if (minz > a[i][j] && a[i][j] != 0)
                {
                    minz = a[i][j];
                    x = i;
                    y = j;
                }
            }
        }
    }
}
void Primm()
{
    while (checkz() == false)
    {
        int x = -1, y = -1;
        findt(x, y);
        if (x == -1)
            break;
        kq.push_back(x);
        kq.push_back(y);
        ans += a[x][y];
        vh[y] = 1;
        v[y] = 0;
    }
}
int main()
{
    
    init();
    Primm();
    cout <<"dH = "<<ans<<endl;
    for (int i = 0;i<kq.size();i+=2){
        cout <<kq[i]<<" "<<kq[i+1]<<endl;
    }

    return 0;
}