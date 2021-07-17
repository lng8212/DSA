#include<bits/stdc++.h>
using namespace std;

bool check (int n){
    int k =n;
    int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0;
    while (k>0){
        int tmp = k%10;
        if (tmp>5) return 0;
        else {
            if (tmp ==0) n0++;
            if (tmp==1) n1++;
            if (tmp ==2) n2++;
            if (tmp==3) n3++;
            if (tmp==4) n4++;
            if (tmp==5) n5++;
        }
        k/=10;
    }
    if (n0>1||n1>1||n2>1||n3>1||n4>1||n5>1) return 0;
    return 1;
}

int main (){

    int t;
    cin >>t;

    while (t--){
        int l,r;
        cin >>l>>r;
        int s = 0;
        for (int i = l;i<=r;i++){
            if (check (i)==1) s++;
        }
        cout <<s<<endl;
    }


    return 0;
}