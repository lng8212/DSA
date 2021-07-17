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
        int s=0, e=n-1;
        for (s=0;s<n-1;s++){
            if (a[s]>a[s+1]) break;
        }
        for ( e=n-1;e>0;e--){// s = 3 e=7
            if (a[e]<a[e-1]) break;
        }
        int maxz=a[s];//30 
        int minz=a[s];//30
        for (int i=s+1;i<=e;i++){
            if (a[i]>maxz) maxz=a[i];//40
            if (a[i]<minz) minz=a[i];//25
        }
        for (int i=0;i<s;i++){
            if (a[i]>minz) {
                s=i;
                break;
            }
        }
        for (int i=n-1;i>=e+1;i--){
            if (a[i]<maxz){
                e=i;
                break;//8
            }
        }
        cout <<s+1<<" "<<e+1<<endl;
    }



    return 0;
}