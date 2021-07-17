#include<bits/stdc++.h>
using namespace std;
struct cv{
    int macv;
    int dl;
    int pf;
};
bool cmp (cv a, cv b){
    return a.pf>b.pf;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        cv a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i].macv;
            cin >>a[i].dl;
            cin >>a[i].pf;
        }
        sort(a,a+n,cmp);
        int ans = 0;
        int count =0;
        int arr[1001]={0};
        for (int i = 0;i<n;i++){
            while (arr[a[i].dl]!=0 && a[i].dl>0) a[i].dl--;
            if (arr[a[i].dl]==0 && a[i].dl>0){
                arr[a[i].dl]=1;
                ans+=a[i].pf;
                count ++;
            }
        }
        cout <<count<<" "<<ans<<endl;
    }

    return 0;
}