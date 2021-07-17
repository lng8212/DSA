#include<bits/stdc++.h>
using namespace std;
int binaryS(int a[], int left, int right , int value){
    while (left<=right){
        int middle = (left +right)/2;
        if (a[middle] > value ) return middle;
        else left = right +1;
     }
     return -1;
}
int main (){
    int T;
    cin >>T;
    while (T--){
        int n,a[100007];
        cin >>n;
        for (int i=1;i<=n;i++){
            cin >>a[i];
        }
        int z=0;
        int  b[100007];
        for (int i=1;i<=n;i++){
            if (a[i]==a[i+1])
        }
        int check =0;
        for (int i=1 ;i<=n;i++){
            for (int j=i+1;j<=n;j++){
                if (binaryS(a,i+2,n,a[i]+a[j])!=-1) {
                    cout <<i<<' '<<j<<' '<<binaryS(a,i+2,n,a[i]+a[j])<<endl;
                    check =1;
                    break;
                }
            }
        }
        if (check ==0 ) cout <<-1<<endl; 
    }

}