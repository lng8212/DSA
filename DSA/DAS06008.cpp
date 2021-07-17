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
        int NoOfB[5]={0};
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        for (int i = 0;i<m;i++){
            cin >>b[i];
            if (b[i]<5) NoOfB[b[i]]++;
        }
        sort(b,b+m);
        int ans = 0;
        for (int i =0 ;i<n;i++){
            int k = upper_bound(b,b+m,a[i])-b;
            if (a[i]==0) continue;
            else if (a[i]==1){
                ans +=NoOfB[0];
                continue;
            }
            else if (a[i]==2){
                ans -= (NoOfB[3] + NoOfB[4]);
            }
            else if (a[i]==3){
                ans += NoOfB[2];
            }
            ans+=(NoOfB[0]+NoOfB[1]);
            ans+=m-k;
        }
        cout <<ans<<endl;
    }

    return 0;
}