#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        vector<int>a;
        for (int i =0;i<n;i++){
            int z;
            cin >>z;
            a.push_back(z);
        }
        int max1 = 1e8,max2 = 1e8;
        for (int i = 0;i<n;i++){
            max1=min(max1,a[i]);
        }
        for (int i = 0;i<n;i++){
            if (a[i]<max2 && a[i]!= max1) max2=a[i];
        }

        if (max2==1e8 || max1 == 1e8) cout <<-1;
        else cout <<max1<<" "<<max2;
        cout <<endl;
    }

    return 0;
}