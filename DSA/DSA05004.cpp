#include<bits/stdc++.h>
using namespace std;


int main (){

    int n;
    cin >>n;
    int a[n+1];
    for (int i = 0;i<n;i++){
        cin >>a[i];
    }
    int maxz = 1;
    int b[1005] = {0};
    for (int i = 0;i<n;i++){
        b[i]=1;
        for (int j = 0;j<i;j++){
            if (a[i]>a[j]) b[i]=max(b[i],b[j]+1);
        }
        maxz = max(b[i],maxz);
    }
    cout <<maxz;


    return 0;
}