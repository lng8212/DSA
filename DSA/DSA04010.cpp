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
            long long s= 0,z= 0 ;
            for (int i = 0;i<n;i++){
                z+=a[i];
                if (z<0) z =0;
                s = max ( s,z);
            }
            cout <<s<<endl;
    }


    return 0;
}