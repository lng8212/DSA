#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        if (n%2==0){
            for (int k = n;k>=1;k--){
                cout <<k<<" ";
            }
        }
        else {
            int m = n/2;
            int m1= (n/2)+1;
            for (int k = n;k>n/2+1;k--){
                cout <<k<<" ";
            }
            cout <<m<<' '<<m1<<' ';
            for (int k = n/2-1;k>0;k--){
                cout <<k<<' ';
            }
        }
        cout <<endl;
    }


    return 0;
}