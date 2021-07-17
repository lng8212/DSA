#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        int b[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
         for (int i=0;i<n;i++){
            cin >>b[i];
        }
        int ans=0;
        for (int i=0;i<n;i++){
            int dem=0;
            int sum1=0,sum2=0;
            for (int j=i;j<n;j++){
                sum1+=a[j];
                sum2+=b[j];
                dem++;
                if (sum1==sum2) ans = max (ans,dem);
            }
        }
    cout <<ans<<endl;
    }
    return 0;
}