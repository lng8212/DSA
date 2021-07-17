#include<bits/stdc++.h>
using namespace std;


int main (){
    cin.tie(0); ios_base::sync_with_stdio(false);
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int z=0;
        int ans =0;
        while (z<a.length()){
            if (a[z]=='1' && a[z+1]=='0'&&a[z+2]=='0') {
                ans +=3;
                a.erase(z,3); 
                z=0;
            }
            else z++;
        }
        cout <<ans<<endl;
    }


    return 0;
}