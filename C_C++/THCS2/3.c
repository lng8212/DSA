#include<stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int k=0;
    while (k++<n){
        for (int i=1;i<=n-k;i++){
            printf("  ");
        }
        for (int i=1;i<=k;i++){
            printf("%d ",i);
        }
        for (int i=k-1;i>=1;i--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
