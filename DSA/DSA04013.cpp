#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int *a = new int [n+1];
        for (int i =1;i<=n;i++){
            cin >>a[i];
        }
        sort (a+1,a+n+1);
        int i=1,j=n/2+1;
        int dem = 0;
        while (i<=n/2 && j<=n){
            if (2*a[i]<=a[j]){
                dem++;
                i++;
                j++;
            }
            else {
                j++;
                dem++;
            }
        }
        cout <<dem+(n/2)-i+1+n-j+1<<endl;
    }

    return 0;
}