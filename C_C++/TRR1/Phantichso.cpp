#include<bits/stdc++.h>
using namespace std;

int a[20],n;
void ktao(){
    for (int i = 1;i<=n;i++){
        a[i]=1;
    }
}
void in(){
    cout <<a[1];
    for (int i=2;i<=n;i++){
        if(a[i]!=0) cout <<"+"<<a[i];
    }
    cout <<endl;
}
bool check (){
    if (a[1]==n) return true;
    return false;
}
void next(){
    int i = n;
    while (a[i]==0){
         i--;
    }
    if (a[i]<a[i-1]+2) {
        a[i-1] = a[i] +a[i-1];
        a[i]=0;
    } 
    else {
        a[i-1]++;
        a[i]--;
        int p = a[i]/a[i-1];
        int r= a[i]%a[i-1];
        for (int j = i;j<i+p-1;j++){
            a[j]=a[i-1];
        }
        a[i+p-1]=a[i-1]+r;
    }
    // 1 1 1 1 1 1
    // 1 1 1 1 2 0
    // 1 1 1 3 0 0
    // 1 1 2 2 0 0
}
void sinh(){
    ktao();
    while (check() == false){
        in();
        next();
    }
    in();
}

int main (){
    cin >>n;
    sinh();


    return 0;
}
