#include<bits/stdc++.h>
using namespace std;

vector <vector<int> > c (1005,vector<int>(1005,0));
int solve (string a, string b){
    a=" "+a;
    b=" "+b;
    for (int i = 1;i<a.size();i++ ){
        for (int j = 1;j<b.size();j++){
            if (a[i]==b[j]) c[i][j]=c[i-1][j-1]+1;
            else c[i][j]= max(c[i-1][j], c[i][j-1]);
        }
    }
    return c[a.size()-1][b.size()-1];
}
void setz (){
    for (int i = 0;i<1001;i++){
        for (int j = 0;j<1001;j++){
            c[i][j]=0;
        }
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        setz();
        string a,b;
        cin >>a>>b;
        cout <<solve(a,b)<<endl;
    }


    return 0;
}