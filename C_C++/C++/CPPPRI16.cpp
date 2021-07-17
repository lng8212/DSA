#include<bits/stdc++.h>
using namespace std;
int a[1000007];
void Era(){
    a[0]=0;
    a[1]=0;
    for (int i=2;i<1000007;i++){
        a[i]=1;
    }
    for (int i=2;i<1000007;i++){
        for (int j =2*i;j<1000007;j+=i){
            a[j]=0;
        }
    }

}
int main (){
    Era();
    int t;
    cin >>t;
    while (t--){
        long long n;
        cin >>n;
        int S=0;
        for (int i=1;i<=sqrt(n);i++){
            if (a[i]==1) S++;
        }
        cout <<S<<endl;
    }

    return 0;
}