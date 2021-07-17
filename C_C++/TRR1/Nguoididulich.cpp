#include<bits/stdc++.h>
using namespace std;
int n;
bool check[100];
int a[20][20];
int minz;
int x[100];
int s = 0;
int minimum =1e9;
void Try(int i){
    
    if (s+(minimum*(n-i))>=minz) return;
    for (int j=2;j<=n;j++){
        if (check[j]==false ){
            x[i]=j;
            check[j]= true;
            s+=a[x[i-1]][x[i]];
            if (i==n){ 
                s+=a[x[i]][1];
                if (s>minz) minz = s;
                s-=a[x[i]][1];
            }
            else Try(i+1);
            s-=a[x[i-1]][x[i]];
            check[j]= false;
        }
    }
}
int main (){

    cin >>n;
 
    for (int i = 1;i<=n;i++){
        for (int j= 1;j<=n;j++){
            cin >>a[i][j];
            if (i!=j  && a[i][j ]<minimum) minimum = a[i][j];   
        }
    }

    for (int i =1;i<=n;i++){
        check[i]= false;
    }
    minz =0;
    x[1]=1;
    Try(2);
    cout <<minz;

    return 0;
}
