#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        string a,b;
        cin >>a>>b;
        int mem = 0;
        if (a[0] == '-') {
            a.erase(a.begin());
            mem++;
        }
        if (b[0] == '-'){
            b.erase(b.begin());
            mem++;
        }
        vector<int>c;
        c.resize(a.size()+b.size(),0);
        int i1=0,i2=0;
        for (int i = a.size()-1;i>=0;i--){
            int carry = 0;
            int n1= a[i]-'0';
            i2=0;
            for (int j = b.size()-1;j>=0;j--){
                int n2 =b[j]-'0';
                int num = n1*n2+ c[i1+i2] + carry;
                carry= num/10;
                c[i1+i2] = num%10;
                i2++;
            }
            if (carry >0) c[i1+i2] +=carry;
            i1++;
        }
        int i = c.size()-1;
        while (i>=0 && c[i]==0) i--;
        if (i<0) {
            cout <<0<<endl;
            continue;
        }
        else {
            vector<int> ans;
            while (i>=0) {
                ans.push_back(c[i]);
                i--;
            }
            if (mem ==1) cout <<"-";
            for (int i = 0;i<ans.size();i++){
                cout <<ans[i];
            }
            cout <<endl;
        }
    }

    return 0;
}