#include<stdio.h>


int main (){
    int n;
    scanf("%d", &n);
    long long F[91];
    F[0]=0;
    F[1]=1;
    for (int i=2;i<=90;i++){
        F[i]=F[i-1]+F[i-2];
    }
    for (int i=0;i<n;i++){
        printf("%lld ", F[i]);
    }

    return 0;
}