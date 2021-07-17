#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n];
        for (int i=0;i<n-1;i++){
            cin >>a[i];
        }
        sort (a,a+n-1);
        int s=1;
        for (int i=0;i<n-1;i++){
            if (a[i]==s){
                s++;
            }
            else {
                cout <<s<<endl;
                break;
            }
        }

    }
    return 0;
}