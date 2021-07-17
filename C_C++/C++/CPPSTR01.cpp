#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        string a;
        int k;
        cin >>a;
        cin >>k;
        int b[200]={0};
        for (int i=0;i<a.size();i++){
            int z= a[i];
            b[a[i]]++;
        }
        int S=0;
        for (int i=97;i<=122;i++){
            if (b[i]==0) S++;
        }
        if (k>=S && a.size()>=26) cout <<1;
        else cout <<0;
        cout <<endl;
    }
    return 0;
}