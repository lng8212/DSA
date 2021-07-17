#include<stdio.h>



int main (){
    int n;
    scanf("%d", &n);
    int s=0;
    for (int i=1;i<=n;i++){
        int tmp=1;
        for (int j=1;j<=i;j++){
            tmp=tmp*j;
        }
        s=s+tmp;
    }
    printf("%d", s);
    return 0;
}