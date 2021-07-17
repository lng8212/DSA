#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        int s= 0;
        for (int i = 0;i<n;i++){
            cin >> a[i];
        }
        for (int i = 0;i<n;i++){
            int minz = a[i];
            int pos = i;
            for (int j = i+1;j<n;j++){
                if (a[j]<minz) {
                    minz = a[j];
                    pos = j;
                }
            }
            if (minz!=a[i]) s++;
            swap(a[i],a[pos]);
        }
        cout <<s<<endl;

    }


    return 0;
}