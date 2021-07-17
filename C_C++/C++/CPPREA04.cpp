#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i=1;i<=n;i++){
            cin >>a[i];
        }
        vector<int >b;
        sort (a+1,a+n+1);
        b.push_back (a[1]);
        int z=n;
        int m =2;
        for (int i=2;i<=n;i++){
            if (i%2!=0){
                b.push_back (a[m]);
                m++;
            }
            else {
                b.push_back (a[z]);
                z--;
            }
            if (z==m) {
                b.push_back (a[z]);
                break;
            }
        }
        vector<int>c;
        for (int i=0;i<b.size();i++){
            if (i%2!=0) {
                c.push_back (b[i]);
            }
        }
        sort (c.begin(),c.end());
        int mq=0;
        for (int i=0,j=0;i<c.size();i++,j+=2){
            cout <<b[j]<<' '<<c[i]<<" ";
            mq=j;
        }
        if (n%2!=0) cout <<b[mq+2];
        cout <<endl;
    }

    return 0;
}