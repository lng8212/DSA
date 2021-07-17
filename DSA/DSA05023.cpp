#include<bits/stdc++.h>
using namespace std;

long long sumofStr(string a){
    long long s=0;
    for (int i = 0;i<a.size();i++){
        s=s*10+(a[i]-'0');
    }
    return s;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        string n;
        cin >>n;
        long long ans = 0;
        for (int i = 0;i<n.size();i++){
            string tmp="";
            for (int j=i;j<n.size();j++){
                tmp+=n[j];
                ans+=sumofStr(tmp);
                // cout <<sumofStr(tmp)<<" ";
            }
            
            // cout <<endl;

        }
        cout <<ans<<endl;
        
    }

    return 0;
}