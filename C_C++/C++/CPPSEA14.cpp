#include<bits/stdc++.h>
using namespace std;
int b[1000007]={0};
int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        bool check =0;
        int count=0;
        for (int i=0;i<n;i++){
            b[a[i]]++;
            if (b[a[i]]>1){
               if (count ==0) {
                   cout <<a[i];
                   count =1;
               }
                check =1;
            }
        }
        if (check ==0) cout <<-1;
        cout <<endl;
        for (int i=0;i<n;i++){
            b[a[i]]--;
        }
    }

    return 0;
}