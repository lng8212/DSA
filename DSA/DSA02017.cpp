#include<bits/stdc++.h>
using namespace std;
bool Left[30],Right[30],unused[30];
int a[10][10];
int maxz;
int s;
void reset(){
    maxz=0;
    s=0;
    for (int i = 0;i<30;i++){
        Left[i]=false;
        Right[i]=false;
        unused[i]=false;
    }
}
void Try(int i){
    for (int j = 1;j<=8;j++){
        if (unused[j]==false  && Left[i-j+8]==false && Right[i+j-1]==false){
            unused[j]=true;
            s+=a[i][j];
            Left[i-j+8]=true;
            Right[i+j-1]=true;
            if (i==8){
                if (s>maxz) maxz = s;
            }
            else Try(i+1);
            unused[j]=false;
            s-=a[i][j];
            Left[i-j+8]=false;
            Right[i+j-1]=false;
        }
    }
}
int main (){
    int t;
    cin >>t;
    while (t--){
        reset();
        for (int i = 1;i<=8;i++){
            for (int j =1;j<=8;j++){
                cin >>a[i][j];
            }
        }
        Try(1);
        cout <<maxz<<endl;
    }
}