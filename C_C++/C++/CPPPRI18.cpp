#include<bits/stdc++.h>
using namespace std;
int a[100007];
int A,B;
int b[100007];
// void Era1 (){
//     a[0]=0;
//     a[1]=0;
//     for (int i=2;i<100007;i++){
//         a[i]=1;
//     }
//     for (int i=2;i<100007;i++){
//         if (a[i]==1 && i%A==0){
//             for (int j=2*i;j<100007;j+=A){
//                 if (a[j]==1)  a[j]=2;
//             }
//         }
//     }
// }
// void Era2(){
//     b[0]=0;
//     b[1]=1;
//     for (int i=2;i<100007;i++){
//         b[i]=1;
//     }
//     for (int i=2;i<100007;i++){
//         if (b[i]==1 && i%B==0){
//             for (int j =2*i;j<100007;j+=B){
//                 if (b[j]==1) b[j]=2;
//             }
//         }
//     }
// }
int main (){
    int t;
    cin >>t;
    while (t--){
        int m,n;
        cin >>m>>n>>A>>B;
        // Era1();
        // Era2();
        int S=0;
        for (int i=m;i<=n;i++){
            if (i%A==0 || i%B==0) S++;
        }
        cout <<S<<endl;
    }

    return 0;
}