#include<bits/stdc++.h>
using namespace std;
vector<string> mu;
void Pow1 (){
    for (int i=1;i<=10;i++){
        long long m = i*i*i;
        string tt;
        string ttt;
        while (m>0){
            tt.push_back(m%10+'0');
            m=m/10;
        }
        int k =tt.size();
        for (int i=0;i<k;i++){
            ttt.push_back(tt[k-1-i]);
        }
        mu.push_back(ttt);
    }
}
bool check (string a, string b){
    int pos=-1;
        for (int j=0;j<a.size();j++){
            if (b[0]==a[j]) {
                pos=j;
                for (int i=0;i<b.size();i++){
                     if (b[i]!=a[pos+i]) {
                         pos = -1;
                         continue;
                     }
               }
            }
        }
        if (pos==-1) return 0;
        return 1;
    }

int main (){
    int T;
    cin >>T;
    Pow1();
    while (T--){
        string a;
        cin >>a;
        bool mark=0;
        for (int i=mu.size()-1;i>=0;i--){
            if (check (a,mu[i])==1) {
                cout <<mu[i]<<endl;
                mark=1;
                break;
            }
        }
        if (mark==0) cout <<-1<<endl;
    }


    return 0;
}