#include<stdio.h>
#include<math.h>
int isPrime (int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int main (){
    int m,n;
    scanf("%d%d", &m,&n);
    int a[m+1][n+1];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (isPrime(a[i][j])==1) printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}