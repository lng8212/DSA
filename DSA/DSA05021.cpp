#include<bits/stdc++.h>
using namespace std;
struct cs {
    int fr;
    int ls;
};
bool cmp (cs a, cs b){
    return a.fr<b.fr;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        cs a[105];
        for (int i = 0 ;i<n;i++){
            cin>>a[i].fr;
            cin >>a[i].ls;
        }
        sort(a,a+n,cmp);
        int dp[105]={0};
        for (int i = 0;i<n;i++){
            dp[i]=1;
            for (int j =0;j<i;j++){
                if (a[j].ls<a[i].fr) dp[i] = max(dp[i],dp[j]+1);
            }
        }
        cout<<dp[n-1]<<endl;

      
        

    }


    return 0;
}