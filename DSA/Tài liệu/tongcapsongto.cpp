#include<bits/stdc++.h>
using namespace std;

int a[1000006];
void Era(){
    a[0]=0;
    a[1]=0;
    for (int i = 2;i<1000002;i++){
        a[i]=1;
    }
    for (int i = 2;i<1000002;i++){
        for (int j = 2*i;j<1000002;j+=i){
            a[j]=0;
        }
    }
}
int main (){
    Era();
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        bool check = false;
        for (int i = 2;i<n;i++){
            if (a[i]==1 && a[n-i]==1){
                cout <<i<<" "<<n-i;
                check = true;
                break;
            }
        }
        if (check == false) {
            cout <<-1;
        }
        cout <<endl;

    }


    return 0;
}