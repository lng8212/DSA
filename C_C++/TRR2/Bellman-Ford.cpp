#include<bits/stdc++.h>
using namespace std;

int n,u;
int a[100][100];
int d[100];
int trace[100];
void init (){

    cin >>n>>u;
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            cin >>a[i][j];
            if (a[i][j]==0) a[i][j]=9999;
        }
    }
    for (int i = 1;i<=n;i++){
        d[i]=a[u][i];
        trace[i]=u;
    }
    d[u]=0;


}
void Bellman_Ford(){
    int k = n-2;
    while (k--){
        for (int i = 1;i<=n;i++){
            if (i!=u){
                for (int j = 1;j<=n;j++){
                    if (d[j]+a[j][i]<d[i] && a[j][i]!=9999){
                        d[i] = d[j]+a[j][i];
                        trace[i]=j; 
                    }
                }
            }
        }
    }
}
int main (){

    init ();
    Bellman_Ford();
    for (int i = 1;i<=n;i++){
        if (d[i]==9999){
            cout <<"K/c "<<u<<" -> "<<i<<" = "<<"INF;"<<endl;
        }
        else {
            cout <<"K/c "<<u<<" -> "<<i<<" = "<<d[i]<<";        ";
            cout <<i<<" <- ";
            int x  =i;
            while (trace[x]!=u){
                cout <<trace[x]<<" <- ";
                x = trace[x];
            }
            cout <<u;
            cout <<endl;
        }
    }

    return 0;
}