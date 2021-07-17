#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >>a;
        int b[300]={0};
        for (int i=0;i<a.size();i++){
            int k = a[i]-'a';
            b[k]++;
        }
        int maxz = 0;
        for (int i =0;i<250;i++){
            if (b[i]>maxz) maxz = b[i];
        }
        int k = a.size();
        if (k%2==0 && maxz <= k/2) cout <<1;
        else if (k%2!=0 && maxz<(k/2)+1) cout <<1;
        else cout <<0;
        cout <<endl;
    }

}
