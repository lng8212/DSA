#include<bits/stdc++.h>
using namespace std;
int n,k;
bool check = 0;
int a[50];
void hv (){
    int i = k;
    while (i>=1 && a[i]==n-k+i) i--;
    if (i<1) {
        check = 1;
        return;
    }
    else{
        a[i]++;
        for (int j = i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int main (){

    int t;
    cin >>t;
    while (t--){
        check = 0;
        cin >>n>>k;
        int b[50];
        for (int i = 1;i<=k;i++){
            cin >>a[i];
            b[i]=a[i];
        }
        hv();
        if (check == 1) cout <<k<<endl;
        else {
            int s = 0;
            int i =1,j=1;
            while (j<=k && i<=k){
                if (a[i]==b[j]) {
                    s++;
                    i++;j++;
                }
                else if (a[i]>b[j]) j++;
                else i++;
            }
            cout <<k-s<<endl;
        }
    }

    return 0;
}