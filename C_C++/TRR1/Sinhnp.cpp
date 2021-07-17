#include<bits/stdc++.h>
using namespace std;

int a[100],n;
void Ktao(){
    for (int i =1 ;i<=n;i++){
        a[i]=0;
    }
}
void In(){
    for (int i =1 ;i<=n; i++){
        cout <<a[i]<<' ';
    }
    cout <<endl;
}
bool check (){
    for (int i = 1;i<=n;i++){
        if (a[i]==0) return false;
    }
    return true;
}
void sinh (){
    int i = n;
    while (i>0 && a[i]==1) {
        a[i]=0;
        i--;
    }
    a[i]=1;
}
void pro (){
    Ktao();
    while (check()==false){
        In();
        sinh();
    }
    In ();
}
int main (){
    cin >>n;
    pro();


    return 0;
}