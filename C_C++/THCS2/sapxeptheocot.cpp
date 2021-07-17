#include<stdio.h>
#define max 200
int main(){
    int n;
    scanf("%d",&n);
    int a[max][max];
    int tmp=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int j=1;j<=n;j++){
        for (int i=1;i<n;i++){
            for (int k=i+1;k<=n;k++){
                if (a[k][j]>a[i][j]){
                    int tmp=a[k][j];
                    a[k][j]=a[i][j];
                    a[i][j]=tmp;
                }
            }
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}