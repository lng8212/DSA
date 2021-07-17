#include<bits/stdc++.h>
using namespace std;

int x[15];
int n;
bool unused[15];
bool check (){
    for (int i = 1;i<=n;i++){
        if (i>=2){
            if ((x[i]-1==x[i-1])||(x[i]+1 ==x[i-1])) return false;
        }
        if (i<n){
            if ((x[i]-1==x[i+1])|| (x[i]+1 ==x[i+1])) return false;
        }
    }
    return true;
}
void Try(int i ){
    for (int j = 1;j<=n;j++){
        if (unused[j]==0) {
            unused[j]=1;
            x[i]=j;
            if (i==n){
                if (check()==true){
                    for (int z =1;z<=n;z++){
                        cout <<x[z];
                    }
                    cout <<endl;
                }
                
            }
            else Try(i+1);
            unused[j]=0;
        }
    } 
}

int main (){

    int t;
    cin >>t;
    while (t--){
        cin >>n;
        memset(unused,0,sizeof(unused));
        Try(1);
        cout <<endl;
        
    }


    return 0;
}