#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void ktao (){
    for (int i = 1;i<=k;i++){
        a[i]=i;
    }
}
void in (){
    for (int i = 1;i<=k;i++){
        cout <<a[i];
    }
    cout <<endl;
}
bool check (){
    for (int i  = 1;i<=k;i++){
        if (a[i]!=n-k+i) return false;
    }
    return true;
}
void sinh (){
    int i = k;
    while (i>0 && a[i]==n-k+i) i--;
    a[i]=a[i]+1;
    for (int j = i+1;j<=k;j++){
        a[j]=a[j-1]+1;
    }
}
void pro (){
    ktao();
    while (check()==false){
        in();
        sinh();
    }
    in();
}
int main (){
    
    cin >>n>>k;
    pro();

    return 0;
}