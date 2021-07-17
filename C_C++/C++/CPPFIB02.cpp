#include<bits/stdc++.h>
using namespace std;

long long F[93];
void process(){
    F[0]=0;
    F[1]=1;
    for (int i=2;i<=92;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
int main (){
    int t;
    cin >>t;
    process();
    while (t--){
        long long n;
        cin >>n;
        bool mark=0;
        for (int i=0;i<=92;i++){
            if(n==F[i]) {
                mark = 1;
                cout <<"YES"<<endl;
                break;
            }
        }
        if (mark == 0) cout <<"NO"<<endl;
    }

    return 0;
}