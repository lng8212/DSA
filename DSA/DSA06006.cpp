#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        vector<int>a;
        a.clear();
        for (int i = 0;i<n;i++){
            int z;
            cin >>z;
            a.push_back(z);
        }
        sort(a.begin(),a.end());
        for (int i =0;i<a.size();i++){
            cout <<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}