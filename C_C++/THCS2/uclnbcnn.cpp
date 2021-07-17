#include<bits/stdc++.h>
using namespace std;
int uocso (int a,int b){
    while (a*b!=0) {
        if (a>b) a=a%b;
        else b=b%a;
    }
    int x=b+a;
    return x;
}
int bc(int a,int b){
    long long t= (a*b)/uocso(a,b);
    return t;
}
int main (){
    int a,b;
    cin >>a>>b;
    cout << uocso(a,b)<<' '<<bc(a,b);
    return 0;
}