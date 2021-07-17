#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int m,n;
        cin >>m>>n;
        int a[m+1],b[n+1];
        for (int i = 0;i<m;i++){
            cin >>a[i];
        }
        for (int j = 0;j<n;j++){
            cin >>b[j];
        }
        sort(a,a+m);
        sort(b,b+n);
            int i = 0,j=0;
            vector<int> hp;
            vector<int> giao;
            hp.clear();
            giao.clear();
            while (i<m&&j<n){
                if (a[i]==b[j]) {
                    hp.push_back(a[i]);
                    giao.push_back(a[i]);
                    i++;j++;
                }
                else if (a[i]>b[j]){
                    hp.push_back(b[j]);
                    j++;
                }
                else if (b[j]>a[i]){
                    hp.push_back(a[i]);
                    i++;
                }
            }
            if (i<m){
                for (int z = i;z<m;z++){
                    hp.push_back(a[z]);
                }
            }
            else if (j<n){
                for (int z = j;z<n;z++){
                    hp.push_back(b[z]);
                }
            }
            for (int z = 0;z<hp.size();z++){
                cout <<hp[z]<<" ";
            }
            cout <<endl;
            for (int z = 0;z<giao.size();z++){
                cout <<giao[z]<<" ";
            }
            cout <<endl;
    }


    return 0;
}