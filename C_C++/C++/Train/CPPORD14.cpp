#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        set<int> b;
        int *a = new int [n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
            b.insert(a[i]);
        }
        for (int i=0;i<n;i++){
            set<int>::iterator z = b.find(a[i]);
            z++;
            if (z !=b.end()) cout <<*z<<" ";
            else cout <<"_ ";
        }
        cout <<endl;
    }


    return 0;
}