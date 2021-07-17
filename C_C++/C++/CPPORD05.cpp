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
        int maxd = a[1]-a[0];
        bool check =1;
        int minz = a[0];
        for (int i=1;i<n;i++){
            if (a[i]-minz>maxd){    
                maxd = a[i]-minz;
            }
            if (a[i]<minz){
                minz = a[i];
            }
        }
        cout <<maxd<<endl;
    }

    return 0;
}