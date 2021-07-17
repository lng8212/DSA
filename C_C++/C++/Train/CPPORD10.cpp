#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i =0;i<n;i++){
            cin >>a[i];
        }
        int b[1006]= {0};
        b[0]=1;
        for (int i =1;i<n;i++){
            b[i]=1;
            for (int j = 0;j<i;j++){
                if (a[i]>a[j] && b[i]<b[j]+1){
                    b[i]=b[j]+1;
                }
            }
        }
        int maxz = 0;
        for (int i = 0;i<n;i++){
            if (maxz<b[i]) maxz=  b[i];
        }
        cout <<maxz<<endl;
    }


    return 0;
}