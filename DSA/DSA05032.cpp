#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int F[100][100];
        memset(F,0,sizeof(F));
        for (int i = 1;i<a.size();i++){
            for (int l =0,r=i;r<a.size();r++,l++){
                if (a[l]==a[r]) F[l][r]=F[l+1][r-1];
                else F[l][r]= min(F[l+1][r],F[l][r-1])+1;
            }
        }
        cout <<F[0][a.size()-1]<<endl;

    }

    return 0;
}