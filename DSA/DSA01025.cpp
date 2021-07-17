#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[20];
void Try(int i){
    for (int j = a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if (i==k){
            for (int z = 1;z<=k;z++){
                char c = a[z] +'A'-1;
                cout <<c;
            }
            cout <<endl;
        }
        else Try(i+1);
    }
}


int main (){

    int t;
    cin >>t;
    while (t--){
        cin >>n>>k;
        a[0]=0;
        Try(1);
    }


    return 0;
}