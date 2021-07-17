#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >>t;
    while (t--){
        long long tu, mau ;
        cin >>tu >> mau ;
        long long  tmp;
        while (1){
            if (mau %tu ==0) {
                cout <<"1/"<<mau/tu<<endl;
                break;
            }
            else {
               tmp = mau/tu +1;
               cout <<"1/"<<tmp <<" + ";
               tu =tu*tmp -mau;
               mau = mau* tmp;
            }
        }
    }

    return 0;
}