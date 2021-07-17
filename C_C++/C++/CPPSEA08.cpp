#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >>t;
    while (t--){
        int n,x;
        cin >>n>>x;
        int a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        int s=0;
        for (int i=0;i<n;i++){
            if (a[i]==x) s++;
        }
        if (s==0) cout <<-1;
        else cout <<s;
        cout <<endl;
    }

    return 0;
}