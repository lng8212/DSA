#include<bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >>T;
    while (T--){
        int n;
        cin >>n;
        int a[1001];
        int b[1001];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        for (int i=0;i<n;i++){
            cin >>b[i];
        }
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if (b[i]>b[j]){
                    int tmp = b[i];
                    b[i]=b[j];
                    b[j]=tmp;
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        int S=1;
        int  m =b [0];
        for (int i=1;i<n;i++){
            if (a[i]>=m) {
                S++;
                m=b[i];
            }
        }
        cout <<S<<endl;
    }

    return 0;
}