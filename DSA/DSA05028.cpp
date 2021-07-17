#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a,b;
        cin >>a>>b;
        int f[a.size()+5][b.size()+5];
        memset(f,0,sizeof(f));
        for (int i = 0;i<=a.size();i++){
            for (int j = 0;j<=b.size();j++){
                if (i==0 || j==0) f[i][j]=i+j;
                else if (a[i-1]==b[j-1]) f[i][j]=f[i-1][j-1];
                else{
                     f[i][j]= min(f[i][j-1],min(f[i-1][j-1],f[i-1][j]))+1;
                }
            }
        }
        cout <<f[a.size()][b.size()]<<endl;
    }

    return 0;
}