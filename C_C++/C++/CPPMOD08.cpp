#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        long long b,p;
        cin >>b>>p;
        long long ans = 0;
        for (long long i = 1;i<p;i++){
            if ((i*i)%p==1){

                long long last = i+ p*(b/p);
                if (last>b) last -=p;
                ans += ((last-i)/p)+1;
            }
            
        }
        cout <<ans <<endl;
    }


    return 0;
}