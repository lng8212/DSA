#include<bits/stdc++.h>

using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int m,n;
        cin >>m>>n;
        int a[m+1];
        int b[n+1];
        for (int i = 0;i<m;i++){
            cin >>a[i];
        }
        for (int j = 0;j<n;j++){
            cin >>b[j];
        }
        int c[n+m]={0};
        for (int i = 0;i<m;i++){
            for (int j = 0;j<n;j++)
            {
                c[i+j]+=a[i]*b[j];
               // cout <<i+j<<" "<<c[i+j]<<endl;
            }
            //cout <<endl;
        }
        int k = (n-1)+(m-1);
        for (int i = 0;i<=k;i++){
            cout <<c[i]<<" ";
        }
        cout <<endl;
    }

    return 0;
}