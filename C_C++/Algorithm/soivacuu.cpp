#include<bits/stdc++.h>
using namespace std;
int c[11];
string a;
int n;
bool check[200];
int b[11];
void sinh (int i){
    for (int j=0;j<n;j++){
        if (check[c[j]]==false) {
            b[i]=c[j];
            check [c[j]]=true;
            if (i==n-1){
                for (int q=0;q<n;q++){
                    char d=b[q]+96;
                    cout <<d;
                }
                cout <<endl;
            }
            else sinh(i+1);

            check[c[j]]=false;
        }

    }
}
int main(){
    
    cin >>a;
    sort(a.begin(),a.end());
    for (int i=0;i<a.size();i++){
        if (a[i]==a[i-1]) {
            a.erase(a.begin()+i);
            i--;
        }
    }
    for (int i=0;i<a.size();i++){
        int k=a[i]-96;
        c[i]=k;
    }
    n=a.size();
    sinh(0);
    return 0;
}