#include<stdio.h>
int main (){
    int n,m;
    scanf("%d%d", &n ,&m );
    int a[100][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (i>0 && i<n-1){
                if (j==0 || j==m-1) printf("*");
                else printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }

    return 0;
}