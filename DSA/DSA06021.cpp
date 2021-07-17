#include<bits/stdc++.h>
using namespace std;



int main (){
    
    int t;
    cin >>t;
    while (t--){
        int n,x;
        cin >>n>>x;
        vector<int>a;
        int pos = -1;
        for (int i = 0;i<n;i++){
            int z;
            cin >>z;
            if (z==x) pos = i;
            a.push_back(z);
        }
        cout <<pos+1<<endl;
    }
}