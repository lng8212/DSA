#include <bits/stdc++.h>
using namespace std;
#define MAX 1e9
int a[1005][1005];
int v,e,u;
int d[1005];
bool chuaxet[1005];
int truoc[100];
void init()
{
    cin>>v>>e>>u;
    memset(a,0,sizeof(a));
    for (int i = 0;i<e;i++){
        int x,y,z;
        cin >>x>>y>>z;
        a[x][y]=z;
        a[y][x]=z;
    }
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (a[i][j] == 0)
                a[i][j] = MAX;
        }
    }
    for (int i = 1; i <= v; i++)
    {
        chuaxet[i] = true;
    }
    chuaxet[u] = false;
    for (int i = 1; i <= v; i++)
    {
        d[i] = a[u][i];
        truoc[i] = u;
    }
    d[u] = 0;
}
int check()
{
    for (int i = 1; i <= v; i++)
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
        int minz = MAX;
        int pos = -1;
        for (int i = 1; i <= v; i++)
        {
            if (chuaxet[i] == true && d[i] < minz)
            {
                minz = d[i];
                pos = i;
            }
        }
        if(pos==-1){
            for (int i = 1;i<=v;i++){
                if (chuaxet[i]==true) {
                    pos = i;
                    break;
                }
            }
        }
        chuaxet[pos] = false;
        for (int i = 1; i <= v; i++)
        {
            if (chuaxet[i] == true && d[i] > d[pos] + a[pos][i])
            {
                d[i] = d[pos] + a[pos][i];
                truoc[i] = pos;
            }
        }
    }
}
int main()
{

    int t;
    cin >>t;
    while (t--){
        init();
        Dijkstra();
        for (int i = 1;i<=v;i++){
            cout <<d[i]<<" ";
        }
        cout <<endl;
    }
    
   

    return 0;
}