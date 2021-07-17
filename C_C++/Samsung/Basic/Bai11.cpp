#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int k;
        cin >>k;
        string a;
         cin >>a;
         for (int i=0;i<a.size();i++){
             char maxz =a[i];
             int poos=i;
             for (int j=i+1;j<a.size() && k>0;j++){
                 if (a[j]>=maxz) {
                     maxz =a[j];
                     poos = j;
                 }
             }
             if (k >0 && a[poos]>=a[i]) {
                 swap (a[i], a[poos]);
                 k--;
             }

        }
        cout <<a<<endl;

    }
    return 0;
}