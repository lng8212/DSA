#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        int fup[n+1]={0};
        int fdown[n+1]={0};
        for (int i = 0;i<n;i++){
            fup[i]=a[i];
            for (int j = 0;j<i;j++){
                if (a[i]>a[j]) fup[i]=max(fup[i],fup[j]+a[i]);
            }
        }
        for (int i =n-1;i>=0;i--){
            fdown[i]=a[i];
            for (int j=n-1;j>i;j--){
                if (a[i]>a[j]) fdown[i]=max(fdown[i],fdown[j]+a[i]);
            }
        }
        int maxz =0;
        for (int i = 0;i<n;i++){
            maxz = max(maxz,fup[i]+fdown[i]-a[i]);
        }
        cout <<maxz<<endl;
    }

    return 0;
}