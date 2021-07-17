#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,m,k;
        cin >>n>>m>>k;
        int a[n+1],b[m+1],c[k+1];
        for (int i = 0 ;i<n;i++){
            cin >>a[i];
        }
        for (int j = 0;j<m;j++){
            cin >>b[j];
        }
        for (int z = 0;z<k;z++){
            cin >>c[z];
        }
        sort(a,a+n);
        sort(b,b+m);
        sort(c,c+k);
        int idx1=0,idx2=0,idx3=0;
        bool check = false;
        while (idx1<n && idx2<m &&idx3 <k){
            if (a[idx1]==b[idx2] && a[idx1] == c[idx3]){
                check = true;
                cout <<a[idx1]<<" ";
                idx1++;idx2++;idx3++;
            }
            else if (a[idx1]<b[idx2]) {
                idx1++;
            }
            else if (b[idx2]<c[idx3]){
                idx2++;
            }
            else idx3++;
        }
        if(check==false) cout <<"NO";
        cout<<endl;
    }


    return 0;
}