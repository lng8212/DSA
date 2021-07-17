#include<bits/stdc++.h>
using namespace std;
bool cmp (int i, int j){
    return i>j;
}
int main (){
    int n; 
    cin >>n;
    int a[1000];
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    sort (a,a+n,cmp);
    int max=a[0];
    int dem=0;
    int b[1000];
    for (int i=0;i<n-1;i++){
        b[i]=a[i]-a[i+1];
    }
    for (int i=0;i<n-1;i++){
        if (b[i] <= 1) {
             max--;
        }
        else {
            max = max - b[i];
        }
        dem ++;
        if (max <= 0) break;
    }
    if (a[0]==0) cout <<0;
    else  cout <<dem+1;

    return 0;
}