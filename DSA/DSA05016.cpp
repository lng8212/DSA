#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        long long arr[n+1];
        arr[1]=1;
        int vt2=1,vt3=1,vt5=1;
        for (int i = 2;i<=n;i++){
            arr[i]=min(min(arr[vt2]*2,arr[vt3]*3),arr[vt5]*5);
            if (arr[i]==arr[vt2]*2) vt2++;
            if (arr[i]==arr[vt3]*3) vt3++;
            if (arr[i]==arr[vt5]*5) vt5++;
        }
        cout <<arr[n]<<endl;
    }


    return 0;
}