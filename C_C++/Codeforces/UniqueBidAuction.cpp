#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        int b[200006]={0};
        for (int i = 1;i<=n;i++){
            cin >>a[i];
            b[a[i]]++;
        }
        int ans = -1;
        for (int i = 0;i<200004;i++){
            if (b[i]==1)  {
                ans =i;
                break;
            }
        }
        int pos = -1;
        for (int i =1 ;i<=n;i++){
            if (a[i] == ans ) {
                pos = i;
                break;
            }
        }
        cout <<pos <<endl;
    }
    return 0;
}