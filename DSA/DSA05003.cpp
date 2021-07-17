#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int x,y,m;
        cin >>x>>y>>m;
        string a,b,c;
        cin >>a>>b>>c;
        int f[x+1][y+1][m+1];
        memset(f,0,sizeof(f));
        for (int i = 1;i<=a.size();i++){
            for (int j =1;j<=b.size();j++){
                for (int z = 1;z<=c.size();z++){
                    if (a[i-1]==b[j-1] && a[i-1]==c[z-1]) f[i][j][z]= f[i-1][j-1][z-1]+1;
                    else {
                        f[i][j][z]= max(f[i-1][j][z], max(f[i][j-1][z],f[i][j][z-1]));
                    }
                }
            }
       }
       cout <<f[x][y][m]<<endl;
    }

    return 0;
}