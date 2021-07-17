#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int s, n, dem;
int d[100];
bool chuaxet[100];
int truoc[100];
void init()
{
    cin >> n >> s;
    dem = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
                a[i][j] = 99999;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        chuaxet[i] = true;
    }
    chuaxet[s] = false;
    for (int i = 1; i <= n; i++)
    {
        d[i] = a[s][i];
        truoc[i] = s;
    }
    d[s] = 0;
}
int check()
{
    for (int i = 1; i <= n; i++)
    {
        if (chuaxet[i] == true)
            return 1;
    }
    return 0;
}
void Dijkstra()
{
    while (check() == 1)
    {
        int minz = 99999;
        int pos = -1;
        for (int i = 1; i <= n; i++)
        {
            if (chuaxet[i] == true && d[i] < minz)
            {
                minz = d[i];
                pos = i;
            }
        }
        if(pos==-1){
            for (int i = 1;i<=n;i++){
                if (chuaxet[i]==true) {
                    pos = i;
                    break;
                }
            }
        }
        chuaxet[pos] = false;
        for (int i = 1; i <= n; i++)
        {
            if (chuaxet[i] == true && d[i] > d[pos] + a[pos][i])
            {
                //d[3]=99999 ----- d[2]+a[2][3]
                d[i] = d[pos] + a[pos][i];
                truoc[i] = pos;
            }
        }
    }
}
int main()
{

    init();
    Dijkstra();
    for (int i = 1; i <= n; i++)
    {
        if (d[i] >= 99999)
        {
            cout << "K/c " << s << " -> " << i << " = "
                 << "INF"
                 << ";";
        }
        else
        {
            cout << "K/c " << s << " -> " << i << " = " << d[i] << ";    ";

            cout << i << " <- ";
            int z = i;
            while (truoc[z] != s)
            {

                cout << truoc[z] << " <- ";
                z = truoc[z];
            }
            cout << s;
        }
        cout << endl;
    }

    return 0;
}