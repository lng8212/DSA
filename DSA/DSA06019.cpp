#include<bits/stdc++.h>
using namespace std;

struct num {
    int gt;
    int fr;
};
bool cmp (num a, num b){
    if (a.fr>b.fr) return true;
    if (a.fr == b.fr && a.gt<b.gt) return true;
    return false;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        num a[n+1];
        int b[100006]={0};
        for (int i = 0;i<n;i++){
            cin >>a[i].gt;
            b[a[i].gt]++;
        }
        for (int i = 0;i<n;i++){
            a[i].fr = b[a[i].gt];
        }
        sort(a,a+n,cmp);
        for (int i = 0;i<n;i++){
            cout <<a[i].gt<<" ";
        }
        cout <<endl;
       
    }


    return 0;
}