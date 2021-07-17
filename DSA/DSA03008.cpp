#include<bits/stdc++.h>
using namespace std;

struct cv {
    int first;
    int second;
};
bool cmp (cv a, cv b){
    return a.second<b.second;
}
int main (){


    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        cv a[1004];
        for (int i = 0;i<n;i++){
            cin >>a[i].first;
        }
        for (int i = 0;i<n;i++){
            cin >>a[i].second;
        }
        sort(a,a+n,cmp);
        int ans = 1;int j = 0;
        for (int i =1;i<n;i++ ){
            if (a[i].first>=a[j].second){
                ans++;
                j=i;
            }
        }
        cout <<ans<<endl;
    }


    return 0;
}