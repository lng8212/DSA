#include<bits/stdc++.h>
using namespace std;

int n;
int a[20];
bool unused[20];
void init(){
    cin >>n;
    for (int i = 0;i<20;i++){
        unused[i]=true;
    }
}
void Try (int i ){
    for (int j = 1;j<=n;j++){
        if (unused[j]==true){
            unused[j]=false;
            a[i] = j;
            if (i==n){
                for (int z = 1;z<=n;z++){
                    cout <<a[z];
                }
                cout <<endl;
            }
            else Try(i+1);
            unused[j]=true;
        }
    }
}

int main (){
    
    int t;
    cin >>t;
    while (t--){
        init();
        Try(1);

    }
}