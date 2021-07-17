#include<bits/stdc++.h>
using namespace std;

int n;
long long s=0;
bool Left[20];
bool Right[20];
bool check[20];
void ktao(){
    for (int i = 0;i<20;i++){
        Left[i]=false;
        Right[i]=false;
        check[i]=false;
    }
}
void Try(int i ){
    for (int j = 1;j<=n;j++){
        if (check[j]==false && Left[i+j-1] == false && Right[i-j+n]==false){
            check[j]=true;
            Left[i+j-1]=true;
            Right[i-j+n]=true;
            if (i==n) s++;
            else Try(i+1);
            check[j]=false;
            Left[i+j-1]=false;
            Right[i-j+n]=false;
        }
    }
}
int main (){
    int t;
    cin >>t;
    while (t--){
        ktao();
        s= 0;
        cin >>n;
        Try(1);
        cout <<s<<endl;
    }


    return 0;
}