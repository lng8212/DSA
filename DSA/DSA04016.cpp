#include<bits/stdc++.h>
using namespace std;


int main (){


    int t;
    cin >>t;
    while (t--){
        int m,n,k;
        cin >>m>>n>>k;
        int *a = new int [m+1];
        int *b = new int [n+1];
        vector<int> z;
        z.clear();
        for (int i = 0;i<m;i++){
            cin >>a[i];
            z.push_back(a[i]);
        }
        for (int j = 0;j<n;j++){
            cin >>b[j];
            z.push_back(b[j]);
        }
        sort(z.begin(),z.end());
        cout <<z[k-1]<<endl;
    }


    return 0;
}