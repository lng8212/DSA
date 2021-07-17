#include<bits/stdc++.h>
using namespace std;

int a[100];
int x[100];
int c[100];
int n,b;
bool unused[100];
int xopt[100];
int fopt;
void input (){
    for (int i = 1;i<100;i++){
        unused[i]= false;
    }
    cin >>n>>b;
    for (int i =1;i<=n;i++){
        cin >>a[i]>>c[i];
    }
    for (int i = 1;i<=n;i++){
        cin>>c[i];
    }
}
int maxz = 0;
void check (){
    int s=0;
    int t=0;
    for (int i = 1;i<=n;i++){
        if (x[i]==1) {
            if (a[i]>maxz) maxz = a[i];
            s=s+a[i];
            t=t+c[i];
        }  
    }
    if (s<=b) {
        if (t>fopt){
            fopt = t;
            for (int i = 1;i<=n;i++){
                xopt[i] = x[i];
            }
        }
    }
}
void Try (int i){
    for (int j = 0;j<=1;j++){
            x[i] = j;
            if (i==n) {
                check ();
            }
            else Try(i+1);
    }

}
int main (){
    input();
    Try(1);
    cout << fopt<<endl;
    for (int i = 1;i<=n;i++){
        cout <<xopt[i]<<' ';
    }


    return 0;
}