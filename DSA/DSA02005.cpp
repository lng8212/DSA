#include<bits/stdc++.h>
using namespace std;
string a;
int b[20];
bool check[500];
void Try(int i){
    for (int j= 0;j<a.size();j++){
        int z = a[j];
        if (check[z]==0){
            check[z]=1;
            b[i]=z;
            if (i==a.size()){
                for (int i = 1;i<=a.size();i++){
                    cout <<(char)(b[i]);
                }
                cout <<" ";
            }
            else Try(i+1);
            check[z]=0;
        }
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        cin >>a;
        memset(check,0,sizeof(check));
        Try(1);
        cout <<endl;
    }

    return 0;
}