#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >>T;
    while (T--){
        int n,k;
        cin >>n>>k;
        int a[10000]={0};
        for (int i=1;i<=k;i++){
            cin >>a[i];
        }
        int vt = k;
        while (a[vt]==a[vt-1]+1) vt--;
        if (vt==0){
            for (int i=1;i<=k;i++){
                cout <<n-k+i<<' ';
            }
        }
        else {
            a[vt]--;
            for (int i=vt+1;i<=k;i++){
                a[i]=n-k+i;
            }
            for (int i=1;i<=k;i++){
                cout <<a[i]<<' ';
            }
        }
        cout <<endl;
    }
    return 0;
}