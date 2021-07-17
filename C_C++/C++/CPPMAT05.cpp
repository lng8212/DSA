#include<bits/stdc++.h>
using namespace std;



int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1][n+1];
        int sum = 0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin >>a[i][j];
                sum +=a[i][j];
            }
        }
        int maxH=0;
        int maxC=0;
        for (int i=0;i<n;i++){
            int s=0;
            for (int j=0;j<n;j++){
                s=s+a[i][j];
            }
            maxH=max(maxH,s);
        }
        int maxFn=0;
        for (int j=0;j<n;j++){
            int s=0;
            for (int i=0;i<n;i++){
                s=s+a[i][j];
            }
            maxC=max(maxC,s);
        }
        maxFn= max(maxC,maxH);
        
        cout <<maxFn*n-sum<<endl;
    }




    return 0;
}