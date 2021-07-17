#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n+1],b[m+1],c[k+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        for (int i =0;i<m;i++){
            cin >>b[i];
        }
        for (int i = 0;i<k;i++){
            cin >>c[i];
        }
        sort (a,a+n);
        sort(b,b+m);
        sort(c,c+k);
        int x=0,y=0,z=0;
        bool check = 0;
        while (x<n && y<m&&z<k){
            if (a[x]==b[y] && a[x] == c[z]) {
                cout <<a[x]<<" ";
                x++;y++;z++;
                check =1;
            }
            else if (a[x]<b[y]) x++;
            else if (b[y]<c[z]) y++;
            else z++;

        }
        if (check == 0) cout <<"NO";
        cout <<endl;
    }

    return 0;
}