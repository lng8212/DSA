#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        int b[n+1];
        int tmp=0;
        for (int i=0;i<n;i++){
            if (a[i]>0) {
                b[tmp++]=a[i];
            }
        }
        sort (b,b+tmp);
        int ans=1;
        for (int i=0;i<tmp;i++){
                if (b[i]>ans) break;
                else if (b[i]<ans) continue;
                else {
                    ans++;
                }
        }
        cout <<ans<<endl;
    }

    return 0;
}