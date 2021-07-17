#include<bits/stdc++.h>
using namespace std;


int main (){


    int t;
    cin >>t;
    while (t--){
        int z;
        string a;
        cin >>z>>a;
        cout <<z<<" ";
        int i = a.size()-2;
        while (i>=0 && a[i]>=a[i+1]) i--;
        if (i<0) {
            cout <<"BIGGEST"<<endl;
            continue;
        }
        else {
            int k = a.size()-1;
            while (a[i]>=a[k]) k--;
            swap(a[i],a[k]);
            int l = i+1;
            int r = a.size()-1;
            while (l<=r){
                swap(a[l],a[r]);
                l++;r--;
            } 
            for (int i = 0;i<a.size();i++){
                cout <<a[i];
            }
            cout <<endl;
        }
    }
    return 0;
}