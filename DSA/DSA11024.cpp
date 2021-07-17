#include<bits/stdc++.h>
using namespace std;


int main (){


    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        vector<int> a;
        a.resize(n);
        for (int i =0;i<n;i++){
            cin >>a[i];
        }
        sort(a.begin(),a.end());
        cout <<a[(a.size()-1)/2]<<endl;
    }


    return 0;
}