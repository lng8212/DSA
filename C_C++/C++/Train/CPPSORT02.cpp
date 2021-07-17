#include<bits/stdc++.h>
using namespace std;
int x;
bool cmp (int a, int b){
    int k= abs (a-x);
    int k2 = abs (b-x);
    return k<k2;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n>>x;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        stable_sort(a,a+n,cmp);
        for (int i =0;i<n;i++){
            cout <<a[i]<<' ';
        }
        cout <<endl;
    }


    return 0;
}