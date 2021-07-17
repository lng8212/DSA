#include<bits/stdc++.h>
using namespace std;

int a[20];
int n,k;
void init (){
    cin >>n>>k;
}

void Try(int i){
    for (int j = a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if (i==k){
            for(int z = 1;z<=k;z++){
                cout <<a[z];
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
        init();
        Try(1);
    }


    return 0;
}