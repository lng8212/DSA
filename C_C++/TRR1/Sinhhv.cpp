#include<bits/stdc++.h>
using namespace std;

int a[20],n;
void ktao (){
    for (int i = 1;i<=n;i++){
        a[i]=i;
    }
}
void in (){
    for (int i = 1;i<=n;i++){
        cout <<a[i]<<' ';
    }
    cout <<endl;
}
bool check (){
    for (int i = 1;i<n;i++){
        if (a[i]<a[i+1]) return false;
    }
    return true;
}
void next (){
    int i = n-1;
    while (a[i+1]<a[i]) i--;
    int k =n;
    while (a[k]<a[i]) k--;
    swap (a[k],a[i]);
    int l = i+1,r =n;
    while (l<=r){
        swap(a[l],a[r]);
        l++;r--;
    }
}
void sinh (){
    ktao();
    while (check ()== false){
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