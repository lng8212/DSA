#include<bits/stdC++.h>
using namespace std;

int b[20],a[20],n,k,p;
void ktao (){
    for (int i = 1;i<=k;i++){
        b[i]=a[i];
    }
}
void in (){
    cout <<"(";
    for (int i = 1;i<=k-1;i++){
        cout <<b[i]<<", ";
    }
    cout <<b[k]<<")";
}
bool check (){
    for (int i = 1;i<=k;i++){
        if (b[i]!=a[n-k+i]) return false;
    }
    return true;
}
// 5 10 15
// 5 10 20
// 5 10 25
// 5 10 30
// 5 10 35
// 5 15 20
int countz = 0;
void next(){
    int i =k;
    while (b[i]==a[n-k+i]) i--;
    countz ++;
    b[i]=a[i+countz];
    for (int j = i+1;j<=k;j++){
        b[j]=a[j-1+countz];
    }
}
bool ktra(){
    int s=0;
    for (int i = 1;i<=k;i++){
        s+=b[i];
    }
    if (s==p) return true;
    return false;
}
void sinh (){
    ktao();
    while (check ()== false){
         in();
        next();
    }
    if (ktra()==true) in();
}
int main (){
    cin >>n>>k;
    for (int i= 1;i<=n;i++){
        cin >>a[i];
    }
    sort(a,a+n);
    
    cin >>p;
    sinh();
    return 0;
}