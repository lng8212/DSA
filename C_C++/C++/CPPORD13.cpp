#include<bits/stdc++.h>
using namespace std;


void fastIO (){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin >>n>>m;
        int a[n+1],b[m+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        for (int i = 0;i<m;i++){
            cin >>b[i];
        }
        int s1 = 0,s2=0;
        for (int i = 0;i<n;i++){
            s1+=a[i];
        }
        for (int i = 0;i<m;i++){
            s2+=b[i];
        }
        int k = min (n,m);
        int tmp1=0,tmp2=0;
        int ans = 0;
        for (int i = 0;i<k;i++){
            tmp1+=a[i];
            tmp2+=b[i];
            int t1 = tmp1+s2-tmp2;
            int t2= tmp2+s1-tmp1;
            ans  = max(ans, max(t1,t2));
        }
        cout <<ans <<endl;
    }


    return 0;
}