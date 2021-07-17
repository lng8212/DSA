#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        int a[n+1];
        int b[m+1];
        int pa[100006]={0};
        int pb[100006]={0};
        for (int i=0;i<n;i++){
            cin >>a[i];
            pa[a[i]]++;
        }
        for (int i=0;i<m;i++){
            cin >>b[i];
            pb[b[i]]++;
        }
        for (int i=0;i<100006;i++){
            if (pa[i]!=0 || pb[i]!=0) cout <<i<<' ';
        }
        cout <<endl;
        for (int i=0;i<100006;i++){
            if ((pa[i]== pb[i]) && pa[i]!=0 ){
                while (pa[i]!=0){
                    cout <<i<<' ';
                    pa[i]--;
                }
            }
        }
        cout <<endl;
    }



    return 0;
}