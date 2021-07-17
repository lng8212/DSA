#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        vector<int> uc;
        int k =n;
        for (int i=2;i<=sqrt(n);i++){
            if (k%i==0) {
                while (k%i==0){
                    k/=i;
                }
                uc.push_back(i);
            }
        }
        if (k>1) uc.push_back(k);
        for (int i = 0; i<uc.size();i++){
            cout <<uc[i]<<' ';
        }
        cout <<endl;
    }


    return 0;
}