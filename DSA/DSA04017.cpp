#include<bits/stdc++.h>
using namespace std;
int main (){


    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        vector<long long >a,b;
        for (int i = 0;i<n;i++){
            long long z;
            cin >>z;
            a.push_back(z);
        }
        for (int i = 0;i<n-1;i++){
            long long z;
            cin >>z;
            b.push_back(z);
        }
        int pos = -1;
        for (int i = 0;i<n-1;i++){
            if (a[i]!=b[i]){
                pos = i;
                break;
            }
        }
        if (pos ==-1) cout <<n;
        else cout <<pos+1;
        cout <<endl;
    }

    return 0;
}