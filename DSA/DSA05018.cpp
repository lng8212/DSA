#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int ans = 0;
        for (int i = 0;i<a.size();i++){
            int l = i, r =i;
            while (l>=0 && r<a.size()){
                if (a[l]==a[r]) {
                    ans = max(ans, r-l+1);
                    l--;r++;
                }
                else break;
            }
        }
        for (int i = 0;i<a.size();i++){
            int l = i, r =i+1;
            while (l>=0 && r<a.size()){
                if (a[l]==a[r]) {
                    ans = max(ans, r-l+1);
                    l--;r++;
                }
                else break;
            }
        }
        cout <<ans<<endl;
    }

    return 0;
}