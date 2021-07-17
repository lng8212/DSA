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
        sort (a,a+n);
        int z = a[n-1]-a[0];
        vector<int>ucln;
        for (int i =1;i<=sqrt(z);i++){ 
            if (z%i==0){
                ucln.push_back(i);
                if (i!=z/i) ucln.push_back(z/i);
            }
        }
        int s=0;
       
        for (int i = 0 ;i<ucln.size();i++){
            int m  = a[0]%ucln[i];
            int j;
             bool ck = 0;
            for (j = 1;j<n;j++){
                if (a[j]%ucln[i]!=m) ck =1;
            }
            if (j==n && ck == 0) s++;
        }
        cout <<s<<endl;
    }



    return 0;
}