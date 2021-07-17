#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int *a = new int [n+1];
        for (int i =0;i<n;i++){
            cin >>a[i];
        }
        int low = 0;
        for (int i = 0;i<n;i++){
            if (a[i]<=k) low++;
        }
        int bad = 0;
        for (int i = 0;i<low;i++){
            if (a[i]>k) bad++;
        }
        int ans = bad;
        for (int i =0,j=low;j<n;j++,i++){
            if (a[i]>k) bad--;
            if (a[j]>k) bad++;
            ans = min(ans,bad);
        }
        cout <<ans <<endl;
    }


    return 0;
}