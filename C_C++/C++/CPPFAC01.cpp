#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        string a;
        cin >>n;
        cin.ignore();
        cin >>a;
        int b[10];
        memset(b,0,sizeof(b));
        for (int i=0;i<n;i++){
            if (a[i]=='2'){
                b[2]++;
            }
            if (a[i]=='3'){
                b[3]++;
            }
            if (a[i]=='4'){
                b[3]++;
                b[2]+=2;
            }
            if (a[i]=='5'){
                b[5]++;
            }
            if (a[i]=='6'){
                b[5]++;
                b[3]++;
            }
            if (a[i]=='7'){
                b[7]++;
            }
            if (a[i]=='8'){
                b[7]++;
                b[2]+=3;
            }
            if (a[i]=='9'){
                b[7]++;
                b[3]+=2;
                b[2]++;
            }
        }
        for (int i=9;i>=2;i--){
            if (b[i]){
                while (b[i]){
                    cout <<i;
                    b[i]--;
                }
            }
        }
        cout <<endl;

    }

    return 0;
}