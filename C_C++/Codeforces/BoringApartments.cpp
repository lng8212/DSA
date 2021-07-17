#include<bits/stdc++.h>
using namespace std;
int sumofNum(int n){
    int s= 0;
    while (n>0){
        s++;
        n/=10;
    }
    return s;
}

int main (){
    int t;
    cin >>t;
    int a[1000]={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    while (t--){
        int n;
        cin >>n;
        int ans =0;
        int i=0;
        while (a[i]!=n){
            ans = ans + sumofNum(a[i]);
            i++;
        }
        ans = ans + sumofNum(a[i]);
        cout <<ans <<endl;
        

    }


    return 0;
}