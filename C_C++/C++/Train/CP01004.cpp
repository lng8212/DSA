#include<bits/stdc++.h>
using namespace std;


int main (){


    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        int b[100007]={0};
        for (int i = 0;i<n;i++){
            cin >>a[i];
            b[a[i]]++;
        }
        int maxz = 0;
        int maxnum = 0;
        for (int i = 0;i<n;i++){
            if (b[a[i]]>maxz){
                maxz= b[a[i]];
                maxnum =a[i];

            }
        }
        if (maxz>n/2) cout <<maxnum;
        else cout <<"NO";
        cout <<endl;
    }


    return 0;
}