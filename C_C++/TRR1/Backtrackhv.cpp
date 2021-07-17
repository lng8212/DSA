#include<bits/stdc++.h>
using namespace std;
int n, a[20];
bool check[20];
void ktao (){
    for (int i =0; i<20; i++){
        check[i] = false;
    }
}
void Try (int i){
    for (int j = 1;j<=n;j++){
        if (check[j] == false ){
            a[i]=j;
            check[j] = true;
            if (i==n) {
                for (int i = 1;i<=n;i++){
                    cout <<a[i]<<' ';
                }
                cout <<endl;
            }
            else Try(i+1);
            check[j]= false;
        }
    }
}
int main (){
    cin >>n;
    Try(1);
    return 0;
}