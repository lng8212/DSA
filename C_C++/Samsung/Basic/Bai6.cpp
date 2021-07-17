#include<bits/stdc++.h>
using namespace std;
int a[100];
int pos =0;
void Try (int n,int t ){
    for (int i=n;i>=1;i--){
        a[pos]=i;
        pos ++;
        if (t- i== 0){
            cout <<"(";
            for (int z=0;z<pos-1;z++){
                cout <<a[z]<<' ';
            }
            cout  <<a[pos-1];
            cout <<") ";
        }
        else {
            if (t-i>0){
            Try(i,t-i);
            }
            
        }
         pos--;
       
    }
}
int main (){
    int T;
    cin >>T;
    while (T--){
        int n;
        cin >>n;
        Try(n,n);
        cout <<endl;
    
    }


    return 0;
}