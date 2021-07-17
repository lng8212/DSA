#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){

        int n;
        cin >>n;
        int a[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i]; 
        }
       long long excln;
       long long excl=0, incl=a[0];
       for (int i=1;i<n;i++){
           excln = max(excl,incl);
           incl = excl + a[i];
           excl = excln;
       }
       //5  5  10  100  10  5    
// bao gom hien tai =  max trcdo-1 + hien tai; ( = excel cua for trc )
// k bao gom bang max (for truoc)
       cout <<max(incl,excl)<<endl;
    }

    return 0;
}
