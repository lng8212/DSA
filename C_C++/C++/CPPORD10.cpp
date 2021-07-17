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
        int b[1006];
        b[0]=1;
        for (int i=1;i<n;i++){
            b[i]=1;
            for (int j=0;j<i;j++){
                if (a[i]>a[j] && b[i]<b[j]+1){
                    b[i]=b[j]+1;
                }
            }
        }
        int max =0;
        for (int i=0;i<n;i++){
            if (b[i]>max ) max = b[i];
        }
        cout <<max <<endl;
    }


    return 0;
}