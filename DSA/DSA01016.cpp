#include<bits/stdc++.h>
using namespace std;

int a[20];
int n;
bool check (int n){
    for (int i = 2;i<=n;i++){
        if (a[i]>a[i-1]) return 0;
    }
    return 1;
}
void Try(int i, int s){
    
    for (int j = n-s;j>=1;j--){
        a[i]=j;
        if (s>n || i>n) return; 
        if(s+j==n && check(i+1)==1){
            cout <<"(";
            for (int z = 1;z<i;z++){
                cout <<a[z]<<" ";
            }
            cout <<a[i]<<')'<<" ";
        }
        else Try(i+1,s+j);
    }
}

int main (){
    
    int t;
    cin >>t;
    while (t--){
        cin >>n;
        memset(a,0,sizeof(a));
        a[0]=20;
        Try(1,0);
        cout <<endl;
    }


    return 0;
}