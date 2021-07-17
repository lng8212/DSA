#include<bits/stdc++.h>
using namespace std;
 int a[1005][1005];
int stringtonum(string a){
    int x = 0;
    for (int i = 0;i<a.size();i++){
        x=x*10+a[i]-'0';
    }
    return x;
}
int main (){

    int n;
    cin >>n;
    int x = n;
    cin.ignore();
   
    memset(a,0,sizeof(a));
    while (x--){
        string s;
        getline(cin,s);
        for (int i  = 0;i<s.size();i++){
            string tmp;
            while (s[i]!=' '&& i<s.size()){
                tmp.push_back(s[i]);
                i++;
            }
            a[n-x][stringtonum(tmp)]=1;
        }
    }
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }

    return 0;
}